#include<stdlib.h>
#include<locale.h>
#include<stdio.h>

main () {
	
	setlocale(LC_ALL,"Portuguese");
	
	int contador;
	
	contador = 1;
	
	while (contador < 101) {
	 contador = contador + 1;
	 if (contador %2 == 0) {
	 	printf("%d \n", contador);	
	 }		
	}

system("PAUSE");

}
