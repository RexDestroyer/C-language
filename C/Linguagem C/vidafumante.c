#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main (void) {
	
	
setlocale(LC_ALL,"Portuguese");


int mes, dia, n1, n2, result1;
float result2;

printf("Em média quantos cigarros você fuma por dia: ");
scanf("%d", &n1);
printf("Digite por quanto tempo você fuma (meses): ");
scanf("%d", &n2);


dia = n1*10;

mes = dia*30;

result1 = n2*mes;

result2 = result1/1440;

printf ("Segundo a Espectativa que 1 Cigarro = -10min de vida! \n Você perdeu: %f dias de vida!", result2);

system("PAUSE");



}
