#include<stdio.h>
#include<locale.h>
#include<stdlib.h>

main () {
	setlocale(LC_ALL,"Portuguese");
	
	float notas[5];
	int cont;
//declara��o: uma vari�vel inteira como contador e um vetor!
	
for (cont = 0; cont <= 4; cont++) {
    printf ("Digite a nota para a posi��o [%d]: ", cont);
    scanf ("%f", &notas[cont]);
//leitura dos valores digitados em fun��o da posi��o do contador, a qual vai de 0 - 4 (5 posi��es).
}

for (cont = 0; cont<= 4; cont++) {
    printf("notas[%d] = %f \n", cont, notas[cont]);
    //exibi��o dos valores na tela, tendo como o contador do vetor "notas" a vari�vel "cont"!
}

system("PAUSE");	
	
}
