#include<stdlib.h>
#include<locale.h>
#include<stdio.h>


main () {
	
	setlocale(LC_ALL,"Portuguese");

	int num;
	float valor1, valor2;

	printf("Quantas mac�s voc� quer comprar: ");
	scanf("%d", &num);
	
	valor1 = (num * 0.3);
	valor2 = (num * 0.25);
	
	if (num < 12) {
		
		printf("O valor da compra � de: R$ %f \n", valor1);
		
	} else 
	
	printf ("O valor da compra � de: R$ %f \n", valor2);
		
	system("PAUSE");
	
}		
