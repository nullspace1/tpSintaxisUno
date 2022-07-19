#include "aux.h"
#include "automata.h"

static Automata automataDec;
static Automata automataHex;
static Automata automataOctal;

void construirAutomataParserDec(){
	int matriz[2][10] = {{-1,1,1,1,1,1,1,1,1,1},{1,1,1,1,1,1,1,1,1,1}};
	char* diccionario = "0123456789";
	int estadosFinales[] = {1};
	automataDec = construirAutomata(2,10,matriz,0,1,estadosFinales,diccionario);
}

void construirAutomataParserOctal(){
	int matriz[2][8] = {{-1,1,1,1,1,1,1,1},{1,1,1,1,1,1,1,1}};
		char* diccionario = "01234567";
		int estadosFinales[] = {1};
		automataOctal = construirAutomata(2,8,matriz,0,1,estadosFinales,diccionario);
}

void construirAutomataParserHex(){
	int matriz[2][16] = {{-1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1},{1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1}};
		char* diccionario = "0123456789ABCDEF";
		int estadosFinales[] = {1};
		automataHex = construirAutomata(2,16,matriz,0,1,estadosFinales,diccionario);
}


int main(int argc,char** argc){
	construirAutomataParserHex();
	construirAutomataParserDec();
	construirAutomataParserOctal();

}



