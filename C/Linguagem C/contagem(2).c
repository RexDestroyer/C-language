#include<stdlib.h>
#include<locale.h>
#include<stdio.h>

main () {
	
	setlocale(LC_ALL,"Portuguese");
	
	int cont1, cont2;
	 printf("digite o primeiro n�mero: ");
	 scanf("%d", &cont1);
	 printf("digite o segundo n�mero: ");
	 scanf("%d", &cont2);
	 
	while(cont1 + 1 < cont2) {
		
		printf("%d \n", cont1);
		cont1 = cont1 + 1;
	}
	
	

system("PAUSE");

}
	
