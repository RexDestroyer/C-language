#include<stdlib.h>
#include<locale.h>
#include<stdio.h>

main () {
	
	setlocale(LC_ALL,"Portuguese");
	
	int contador;
	
	contador = 4;
	
	while (contador <= 4) {
	printf("%d \n \b", contador);
	contador = contador - 1;	
	}

system("PAUSE");

}
