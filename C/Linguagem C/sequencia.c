#include<stdlib.h>
#include<locale.h>
#include<stdio.h>


main () {
	
	setlocale(LC_ALL,"Portuguese");

int A, B, C;
printf("Programa para Sequência: Do Maior para o Menor. \n");
printf("Entre com o valor de A: ");
scanf("%d", &A);
printf("Entre com o valor de B: ");
scanf("%d", &B);
printf("Entre com o valor de C: ");
scanf("%d", &C);

if ((A>B) && (B>C)) { 
	printf("A sequência é: %d %d %d \n", A, B, C);	
} 

if ((A>C) && (C>B)) {
	printf("A sequência é: %d %d %d \n", A, C, B);
}

if ((B>A) && (A>C)) {
	printf("A sequência é: %d %d %d \n", B, A, C);	
}
 
if ((B>C) && (C>A)) {
	printf("A sequência é: %d %d %d \n", B, C, A);
}

if ((C>A) && (A>B)) {
	printf("A sequência é: %d %d %d \n", C, A, B);	
} 

if ((C>B) && (B>A)) {
	printf("A sequência é: %d %d %d \n", C, B, A);
}
	
	
system("PAUSE");
	

}
