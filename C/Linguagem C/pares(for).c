#include<stdlib.h>
#include<locale.h>
#include<stdio.h>

main () {
	
	setlocale(LC_ALL,"Portuguese");
	
	int cont;
	
	for (cont= 1; cont < 101; cont = cont+ 1) {
	    if (cont %2 == 0) {
	 	printf("%d \n", cont);	
	     }		
	}

system("PAUSE");

}
