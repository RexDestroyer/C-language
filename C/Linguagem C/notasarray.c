#include<stdio.h>
#include<locale.h>
#include<stdlib.h>

main () {
	setlocale(LC_ALL,"Portuguese");
	
	float notas[5];
	int cont;
//declaração: uma variável inteira como contador e um vetor!
	
for (cont = 0; cont <= 4; cont++) {
    printf ("Digite a nota para a posição [%d]: ", cont);
    scanf ("%f", &notas[cont]);
//leitura dos valores digitados em função da posição do contador, a qual vai de 0 - 4 (5 posições).
}

for (cont = 0; cont<= 4; cont++) {
    printf("notas[%d] = %f \n", cont, notas[cont]);
    //exibição dos valores na tela, tendo como o contador do vetor "notas" a variável "cont"!
}

system("PAUSE");	
	
}
