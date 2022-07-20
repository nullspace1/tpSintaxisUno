
#include "nodos.h"





int main(int argc,char** argv){
	Rama* rama = construirRama(argv[1]);

	if(rama == NULL){
		printf("Error construyendo arbol!\n");
	}

	int resultado = evaluarArbol(rama);

	printf("%s = %d", argv[1],resultado);

}




