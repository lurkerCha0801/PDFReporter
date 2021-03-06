/*
 * JasperReports - Free Java Reporting Library.
 * Copyright (C) 2001 - 2011 Jaspersoft Corporation. All rights reserved.
 * http://www.jaspersoft.com
 *
 * Unless you have purchased a commercial license agreement from Jaspersoft,
 * the following license terms apply:
 *
 * This program is part of JasperReports.
 *
 * JasperReports is free software: you can redistribute it and/or modify
 * it under the terms of the GNU Lesser General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * JasperReports is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
 * GNU Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public License
 * along with JasperReports. If not, see <http://www.gnu.org/licenses/>.
 */
package org.oss.pdfreporter.engine.fill;

import java.util.Locale;
import java.util.ResourceBundle;
import java.util.TimeZone;

import org.oss.pdfreporter.engine.JRComponentElement;
import org.oss.pdfreporter.engine.JRException;
import org.oss.pdfreporter.engine.JRExpression;
import org.oss.pdfreporter.engine.JRExpressionCollector;
import org.oss.pdfreporter.engine.JROrigin;
import org.oss.pdfreporter.engine.JRPrintElement;
import org.oss.pdfreporter.engine.JRStyle;
import org.oss.pdfreporter.engine.JRVisitor;
import org.oss.pdfreporter.engine.component.Component;
import org.oss.pdfreporter.engine.component.ComponentKey;
import org.oss.pdfreporter.engine.component.ComponentManager;
import org.oss.pdfreporter.engine.component.ComponentsEnvironment;
import org.oss.pdfreporter.engine.component.FillComponent;
import org.oss.pdfreporter.engine.component.FillContext;
import org.oss.pdfreporter.engine.component.FillPrepareResult;
import org.oss.pdfreporter.engine.type.EvaluationTimeEnum;


/**
 * A {@link JRComponentElement} which is used during report fill.
 *
 * @author Lucian Chirita (lucianc@users.sourceforge.net)
 * @version $Id: JRFillComponentElement.java 5766 2012-11-01 16:39:01Z lucianc $
 */
public class JRFillComponentElement extends JRFillElement implements JRComponentElement, FillContext
{

	private FillComponent fillComponent;
	private boolean filling;

	public JRFillComponentElement(JRBaseFiller filler, JRComponentElement element,
			JRFillObjectFactory factory)
	{
		super(filler, element, factory);

		ComponentKey componentKey = element.getComponentKey();
		ComponentManager manager = (ComponentManager) ComponentsEnvironment.getInstance(filler.getJasperReportsContext()).getManager(componentKey);
		fillComponent = manager.getComponentFillFactory(filler.getJasperReportsContext()).toFillComponent(element.getComponent(), factory);
		fillComponent.initialize(this);
	}

	public JRFillComponentElement(JRFillComponentElement element,
			JRFillCloneFactory factory)
	{
		super(element, factory);

		ComponentKey componentKey = element.getComponentKey();
		ComponentManager manager = (ComponentManager) ComponentsEnvironment.getInstance(filler.getJasperReportsContext()).getManager(componentKey);
		fillComponent = manager.getComponentFillFactory(filler.getJasperReportsContext()).cloneFillComponent(element.fillComponent, factory);
		fillComponent.initialize(this);
	}

	protected void evaluate(byte evaluation) throws JRException
	{
		reset();
		evaluatePrintWhenExpression(evaluation);

		if (isPrintWhenExpressionNull() || isPrintWhenTrue())
		{
			fillComponent.evaluate(evaluation);
		}

		filling = false;
	}

	protected boolean prepare(int availableHeight, boolean isOverflow)
			throws JRException
	{
		boolean willOverflow = false;

		super.prepare(availableHeight, isOverflow);

		if (!isToPrint())
		{
			return willOverflow;
		}

		boolean isToPrint = true;
		boolean isReprinted = false;

		if (!filling
				&& isOverflow && isAlreadyPrinted() && !isPrintWhenDetailOverflows())
		{
			isToPrint = false;
		}

		if (isToPrint && availableHeight <  getRelativeY() + getHeight())
		{
			isToPrint = false;
			willOverflow = true;
		}

		if (!filling && isToPrint && isOverflow && isPrintWhenDetailOverflows()
				&& (isAlreadyPrinted() || !isPrintRepeatedValues()))
		{
			isReprinted = true;
		}

		if (isToPrint)
		{
			FillPrepareResult result = fillComponent.prepare(availableHeight - getRelativeY());

			isToPrint = result.isToPrint();
			willOverflow = result.willOverflow();
			setStretchHeight(result.getStretchHeight());

			// if the component will overflow, set the filling flag to true
			// to know next time that the component is continuing
			filling = willOverflow;
		}

		setToPrint(isToPrint);
		setReprinted(isReprinted);

		return willOverflow;
	}

	protected JRPrintElement fill() throws JRException
	{
		return fillComponent.fill();
	}

	protected JRTemplateElement createElementTemplate()
	{
		// not called
		return null;
	}

	protected void resolveElement (JRPrintElement element, byte evaluation,
			JREvaluationTime evaluationTime) throws JRException
	{
		performDelayedEvaluation(element, evaluation);
	}

	protected void resolveElement(JRPrintElement element, byte evaluation)
			throws JRException
	{
		fillComponent.evaluateDelayedElement(element, evaluation);
	}

	protected void rewind() throws JRException
	{
		fillComponent.rewind();
		filling = false;
	}

	public void collectExpressions(JRExpressionCollector collector)
	{
		collector.collect(this);
	}

	public void visit(JRVisitor visitor)
	{
		visitor.visitComponentElement(this);
	}

	public JRFillCloneable createClone(JRFillCloneFactory factory)
	{
		return new JRFillComponentElement(this, factory);
	}

	public Component getComponent()
	{
		return ((JRComponentElement) parent).getComponent();
	}

	public ComponentKey getComponentKey()
	{
		return ((JRComponentElement) parent).getComponentKey();
	}

	public Object evaluate(JRExpression expression, byte evaluation)
			throws JRException
	{
		return super.evaluateExpression(expression, evaluation);
	}

	public JRFillDataset getFillDataset()
	{
		return expressionEvaluator.getFillDataset();
	}

	public JRComponentElement getComponentElement()
	{
		return this;
	}

	public int getElementSourceId()
	{
		return elementId;
	}

	public JROrigin getElementOrigin()
	{
		return super.getElementOrigin();
	}

	public int getElementPrintY()
	{
		return getRelativeY();
	}

	public JRStyle getElementStyle()
	{
		return getStyle();
	}

	public void registerDelayedEvaluation(JRPrintElement printElement,
			EvaluationTimeEnum evaluationTime, String evaluationGroup)
	{
		filler.addBoundElement(this, printElement,
				evaluationTime, evaluationGroup, band);
	}

	public Locale getReportLocale()
	{
		return filler.getLocale();
	}

	public ResourceBundle getReportResourceBundle()
	{
		return filler.getResourceBundle();
	}

	public TimeZone getReportTimezone()
	{
		return filler.getTimeZone();
	}

	public JRBaseFiller getFiller()
	{
		return filler;
	}

	@Override
	public FillContainerContext getFillContainerContext()
	{
		return fillContainerContext;
	}

}
