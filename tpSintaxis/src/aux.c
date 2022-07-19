/*
 * aux.c
 *
 *  Created on: Jul 19, 2022
 *      Author: utnso
 */

#include "aux.h"

char** separarString(char* string, char caracter){
	int counter = 1;

	for(int i = 0; string[i] != '\0'; i++){
		if (string[i] == caracter) counter++;
	}

	char** stringSeparada = malloc(sizeof(char*) * (counter+1));

	int pos = 0, last = 0;

	for(int i = 0; 1; i++){
		if (string[i] == caracter || string[i] ==  '\0') {
			stringSeparada[pos] = malloc((sizeof(char) * (i - last + 1)));
			for(int j = last; j < i; j++){
				stringSeparada[pos][j - last] = string[j];
			}
			stringSeparada[pos][i - last] = '\0';
			pos++;
			last = i + 1;
		}
		if (string[i] == '\0') break;
	}

	stringSeparada[counter] = NULL;


	return stringSeparada;
}

char* quitarMarcadorOctal(char* caracter){
	char* sinMarcador = malloc(strlen(caracter) - 1);
	for (int i = 1; caracter[i] != '\0'; i++){
		sinMarcador[i] = caracter[i];
	}
	return sinMarcador;
}

char* quitarMarcadorHexa(char* caracter){
	char* sinMarcador = malloc(strlen(caracter) - 2);
		for (int i = 2; caracter[i] != '\0'; i++){
			sinMarcador[i] = caracter[i];
		}
	return sinMarcador;
}

void append(int* numero,char caracter, int potencia){
		*numero = (*numero*potencia) + (caracter - '0');
}

void appendDecimal(char caracterNumerico,void* datos){
	append((int*)datos,caracterNumerico,10);
}

void appendHex(char caracterNumerico,void* datos){
	append((int*)datos,caracterNumerico,16);
}

void appendOctal(char caracterNumerico, void* datos){
	append((int*)datos,caracterNumerico,8);
}
