#include<stdio.h>
#include<locale.h>
#include<stdlib.h>

main () {
	setlocale(LC_ALL,"Portuguese");
	
	float notas[5] = {7, 8, 10, 9.5, 9.9};
	int cont;
	//declara��o: uma vari�vel inteira contador e um vetor!
	
for (cont = 0; cont<= 4; cont = cont+1)
//fun��o "para": atribuir so valores e limites para contador, considerando o limite j� proposto pela declara��o do vetor!
 {

    printf("notas[%d] = %f \n", cont, notas[cont]);
    //exibi��o dos valores na tela, tendo como o contador do vetor "notas" a vari�vel "cont"!
}


system("PAUSE");	
	
}
