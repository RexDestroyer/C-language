#include<stdlib.h>
#include<locale.h>
#include<stdio.h>

main () {
	
	setlocale(LC_ALL,"Portuguese");
	
	int n, cont, result;
	
	printf("Digite um número: ");
	scanf("%d", &n);
	
	for (cont = 1; 11 >= cont; cont = cont + 1) {
		result = n * cont;
		printf("%d \n", result);
	
	}
	
	system("PAUSE");
	
}
