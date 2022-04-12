#include<stdlib.h>
#include<locale.h>
#include<stdio.h>


int main (void) {
	
	setlocale(LC_ALL,"Portuguese");
    
    int cont1, cont2;
    
	 printf("digite o primeiro número: ");
	 scanf("%d", &cont1);
	 printf("digite o segundo número: ");
	 scanf("%d", &cont2);
    
    for (cont1 = cont1; cont1 >= cont2; cont1 = cont1 + 1) {
    	printf("%d \n", cont1); 	
	}

system("PAUSE");


}
