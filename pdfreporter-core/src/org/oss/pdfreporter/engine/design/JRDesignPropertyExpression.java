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
package org.oss.pdfreporter.engine.design;

import org.oss.pdfreporter.engine.JRConstants;
import org.oss.pdfreporter.engine.JRExpression;
import org.oss.pdfreporter.engine.JRPropertyExpression;
import org.oss.pdfreporter.engine.base.JRBasePropertyExpression;

/**
 * Implementation of {@link JRPropertyExpression} to be used at report
 * design time.
 * 
 * @author Lucian Chirita (lucianc@users.sourceforge.net)
 * @version $Id: JRDesignPropertyExpression.java 4595 2011-09-08 15:55:10Z teodord $
 */
public class JRDesignPropertyExpression extends JRBasePropertyExpression
{

	private static final long serialVersionUID = JRConstants.SERIAL_VERSION_UID;

	/**
	 * Sets the property value expression.
	 * 
	 * @param valueExpression the value expression
	 */
	public void setValueExpression(JRExpression valueExpression)
	{
		super.setValueExpression(valueExpression);
	}
	
}