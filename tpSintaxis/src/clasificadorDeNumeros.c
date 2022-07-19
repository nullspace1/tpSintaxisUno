/*
 ============================================================================
 Name        : tpSintaxis.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include "automata.h"
#include "aux.h"


static Automata automataTipoDeNumero;

void construirAutomataParserTipoDeNumero(){
	int matriz[7][18] = {{1,5,5,5,5,5,5,5,5,5,-1,-1,-1,-1,-1,-1,-1,-1},
			{-1,3,3,3,3,3,3,3,-1,-1,-1,-1,-1,-1,-1,-1,2,2},
			{6,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,-1,-1},
			{3,3,3,3,3,3,3,3,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1},
			{4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,-1,-1},
			{5,5,5,5,5,5,5,5,5,5,-1,-1,-1,-1,-1,-1,-1,-1},
			{-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1}};
	char* diccionario = "0123456789ABCDEFxX";
	int estadosFinales[] = {3,4,5,6};
	// 5 decimal, 3 octal , 4 y 6 hexa
	automataTipoDeNumero = construirAutomata(7,18,matriz,0,4,estadosFinales,diccionario);
}





int main(int argc,char** argv) {

	construirAutomataParserTipoDeNumero();

	char** numeros = separarString(argv[1],'&'); // 548&0439&0x589&0x0


	for(int i = 0; numeros[i] != NULL;i++){
		int resultado = parsearString(automataTipoDeNumero,numeros[i]);

		if (resultado == 5) printf("El numero %s fue clasificado como DECIMAL \n",numeros[i]);
		if (resultado == 3) printf("El numero %s fue clasificado como OCTAL\n",numeros[i]);
		if (resultado == 4 || resultado == 6) printf("El numero %s fue clasificado como HEXADECIMAL\n",numeros[i]);
		if (resultado == -1) printf("Error al parsear el numero %s\n", numeros[i]);

	}
}
