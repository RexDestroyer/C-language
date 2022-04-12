#include<stdlib.h>
#include<locale.h>
#include<stdio.h>

main () {
	
	setlocale(LC_ALL,"Portuguese");
	
	int cont;
	
	for (cont = 1; cont <= 50; cont = cont + 1) {
	printf("%d \n", cont);
	}
	

	system("PAUSE");
	
}

