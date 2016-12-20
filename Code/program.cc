/**
	* @mainpage PRO2 - Práctica QT16-17: Calculadora de expresiones aritméticas
 
	Este programa constituye una calculadora de expresiones aritméticas usando un lenguaje de tipo LISP

	Para la programación de esta calculadora, se han implementado las clases <em>Input</em>, <em>Expression</em>, <em>Environment</em>, <em>PrimitiveOperationSpace</em>, <em>VariableSpace</em>, <em>OperationSpace</em>, que se presentan en esta documentación
*/

/** @file program.cc
    @brief Programa principal de la calculadora de expresiones aritméticas
*/

#ifndef NO_DIAGRAM
#include <iostream>
#include "FunctionsIO.hh"
#endif

#include "Expression.hh"
#include "Environment.hh"

using namespace std;

/** @brief Programa principal para la calculadora de expresiones aritméticas
*/

int main()
{
	Environment env;
	Expression exp;
	/* INV
		'exp' es una expresión vacía al inicio de cada iteración
		El resultado correspondiente de 'exp' se ha imprimido al final de cada iteración
	*/
	while(read(env, exp)) {
		exp.clear();
	}
	env.write();
}
