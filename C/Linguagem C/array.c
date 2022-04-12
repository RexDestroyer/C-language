#include<stdio.h>
#include<locale.h>
#include<stdlib.h>

main () {
	setlocale(LC_ALL,"Portuguese");
	
	float notas[5] = {7, 8, 10, 9.5, 9.9};
	int cont;
	//declaração: uma variável inteira contador e um vetor!
	
for (cont = 0; cont<= 4; cont = cont+1)
//função "para": atribuir so valores e limites para contador, considerando o limite já proposto pela declaração do vetor!
 {

    printf("notas[%d] = %f \n", cont, notas[cont]);
    //exibição dos valores na tela, tendo como o contador do vetor "notas" a variável "cont"!
}


system("PAUSE");	
	
}
