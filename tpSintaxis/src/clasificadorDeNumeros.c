#include <stdio.h>
#include <stdlib.h>
#include "automata.h"
#include "aux.h"

/*
int main(int argc,char** argv) {

	Automata automataTipoDeNumero = construirAutomataParserTipoDeNumero();

	char** numeros = separarString(argv[1],'&'); // 548&0439&0x589&0x0


	for(int i = 0; numeros[i] != NULL;i++){
		int resultado = parsearString(automataTipoDeNumero,numeros[i]);

		if (resultado == 5) printf("El numero %s fue clasificado como DECIMAL \n",numeros[i]);
		if (resultado == 3) printf("El numero %s fue clasificado como OCTAL\n",numeros[i]);
		if (resultado == 4 || resultado == 6) printf("El numero %s fue clasificado como HEXADECIMAL\n",numeros[i]);
		if (resultado == -1) printf("Error al parsear el numero %s\n", numeros[i]);

	}
}
*/
