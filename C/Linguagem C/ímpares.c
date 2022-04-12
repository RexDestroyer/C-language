#include<stdlib.h>
#include<locale.h>
#include<stdio.h>

main () {
	
	setlocale(LC_ALL,"Portuguese");
	
	int contador;
	
	contador = 0;
	
	while (contador < 100) {
	 contador = contador + 1;
	 if (contador %2 != 0) {
	 	printf("%d \n", contador);	
	 }		
	}

system("PAUSE");

}
