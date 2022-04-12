#include<stdio.h>
#include<locale.h>

main () {


setlocale(LC_ALL,"Portuguese");

float n1, n2, resultado;

int op;

printf ("Digite um número para escolher a operação desejada: \n 1 para Adição \n 2 para Subtração \n 3 para Multiplicação \n 4 para Divisão \n");
scanf("%d", &op);
printf("Digite o primeiro número: ");
scanf("%f", &n1);
printf("Digite o segundo número: ");
scanf("%f", &n2);

if (op==1) {

resultado = n1 + n2;
printf("O resultado da Adição de %f e %f é: %f", n1, n2, resultado);

} else

if (op==2) {
	
resultado = n1 - n2;
printf("O resultado da Subtração de %f - %f é: %f", n1, n2, resultado);

} else

if (op==3) {
	
resultado = n1 * n2;
printf("O resultado da Multiplicação de %f e %f é: %f", n1, n2, resultado);	
	
	
} else

if (op==4) {

resultado = n1/n2;
printf("O resultado da Divisão de %f por %f é: %f", n1, n2, resultado);


} else

system("PAUSE");


}









