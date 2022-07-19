/*
 * nodos.c
 *
 *  Created on: Jul 19, 2022
 *      Author: utnso
 */



typedef struct OpNode{
	struct NumNode* siguienteNumero;
	char operador;
}OpNode;

typedef struct NumNode{
	struct OpNode* siguienteOperador;
	int numero;
}NumNode;






