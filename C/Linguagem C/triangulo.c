#include<stdlib.h>
#include<locale.h>
#include<stdio.h>


main () {
	
	setlocale(LC_ALL,"Portuguese");
	
	float A, B, C;
	
	printf("Lado A: ");
	scanf("%f", &A);
	printf("Lado B: ");
	scanf("%f", &B);
	printf("Lado C: ");
	scanf("%f", &C);
	
	if ((A == B) && (B == C)) {
		printf("O Tri�ngulo � equil�tero \n!");
	} 
	
	if ((A == B) && (B != C) || (B == C) && (B != A) || (A == C) && (C != A)) {
		printf("O Tri�ngulo � is�sceles \n!");
	} 
	
	if ((A != B) && (B != C) && (C != A)) {
		printf("O Tri�ngulo � escaleno \n!");
	}
  
	
	system("PAUSE");
	
}
	
	
	
