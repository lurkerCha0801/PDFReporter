/**
 * Copyright [2015] [Open Software Solutions GmbH]
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 * 		http://www.apache.org/licenses/LICENSE-2.0
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 *
 */
package org.oss.pdfreporter.uses.org.oss.evaluator.operator;
import org.oss.pdfreporter.uses.org.oss.evaluator.function.Function.Precedence;
import org.oss.pdfreporter.uses.org.oss.evaluator.function.FunctionArgument;
import org.oss.pdfreporter.uses.org.oss.evaluator.function.string.AbstractOperatorAssociativityLeft;

public abstract class AbstractStringOperatorAssociativityLeftOneStringArg extends AbstractOperatorAssociativityLeft {


	public AbstractStringOperatorAssociativityLeftOneStringArg(String name, Precedence precendence) {
		super(name, 1, precendence);
	}

	@SuppressWarnings("unchecked")
	@Override
	public FunctionArgument<?> execute(FunctionArgument<?>... args) throws IllegalArgumentException {
		assertNumArgs(args);
		return execute((FunctionArgument<String>)args[0]);
	}

	abstract protected FunctionArgument<?> execute(FunctionArgument<String> a) throws IllegalArgumentException;

}