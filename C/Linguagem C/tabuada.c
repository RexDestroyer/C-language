#include<stdlib.h>
#include<locale.h>
#include<stdio.h>

main () {
	
	setlocale(LC_ALL,"Portuguese");
	
	int cont, n, resultado;
	cont = 1;
	
	printf("Digite um número: ");
	scanf("%d", &n);
	
	
	while (11 > cont) {	
	resultado = n * cont;	
	printf("%d * %d = %d \n", n , cont, resultado);	
	cont = cont + 1;
	}
	

system("PAUSE");

}
	
