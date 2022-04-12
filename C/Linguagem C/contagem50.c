#include<stdlib.h>
#include<locale.h>
#include<stdio.h>

main () {
	
	setlocale(LC_ALL,"Portuguese");
	
	int contador;
	
	contador = 1;
	
	while (contador < 51) {
	printf("%d ", contador);
	contador = contador + 1;	
	}

system("PAUSE");

}
