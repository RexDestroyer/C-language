#include<stdlib.h>
#include<locale.h>
#include<stdio.h>


main () {
	
	setlocale(LC_ALL,"Portuguese");

	int senha; 
	
	printf("Digite a senha: ");
	scanf("%d", &senha);
	
	if (senha == 1234) {
		
		printf ("ACESSO PERMITIDO \n");
		
	} else
	
	if (senha != 1234) {
		
		printf("ACESSO NEGADO \n");
	}
	
	system("PAUSE");
	
}
	
	
