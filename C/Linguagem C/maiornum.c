#include<stdlib.h>
#include<locale.h>

main () {
	
	setlocale(LC_ALL,"Portuguese");
	
	float n1, n2;
	
	printf("Digite um n�mero: ");
	scanf("%f", &n1);
	printf("Digite outro n�mero: ");
	scanf("%f", &n2);
	
	if (n1>n2) {
		
		printf("O primeiro n�mero ( %f ) � o maior! ", n1);
		
	 } else
	 
	 if (n2>n1) {
	 	
	   printf("O segundo n�mero ( %f ) � o maior! ", n2);
	 	
	 } else
				
	
	system("PAUSE");
	
	
}
	

