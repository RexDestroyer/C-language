#include<stdio.h>
#include<locale.h>

main () {


setlocale(LC_ALL,"Portuguese");

float n1, n2, resultado;

int op;

printf ("Digite um n�mero para escolher a opera��o desejada: \n 1 para Adi��o \n 2 para Subtra��o \n 3 para Multiplica��o \n 4 para Divis�o \n");
scanf("%d", &op);
printf("Digite o primeiro n�mero: ");
scanf("%f", &n1);
printf("Digite o segundo n�mero: ");
scanf("%f", &n2);

if (op==1) {

resultado = n1 + n2;
printf("O resultado da Adi��o de %f e %f �: %f", n1, n2, resultado);

} else

if (op==2) {
	
resultado = n1 - n2;
printf("O resultado da Subtra��o de %f - %f �: %f", n1, n2, resultado);

} else

if (op==3) {
	
resultado = n1 * n2;
printf("O resultado da Multiplica��o de %f e %f �: %f", n1, n2, resultado);	
	
	
} else

if (op==4) {

resultado = n1/n2;
printf("O resultado da Divis�o de %f por %f �: %f", n1, n2, resultado);


} else

system("PAUSE");


}









