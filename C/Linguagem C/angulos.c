#include<stdlib.h>
#include<locale.h>
#include<stdio.h>

main () {
	
	setlocale(LC_ALL,"Portuguese");
	
	float A, B, C;
	
	printf("Digite um dos �ngulos: ");
	scanf("%f", &A);
	printf("Digite outro �ngulo: ");
	scanf("%f", &B);
	printf("Digite mais um �ngulo: ");
	scanf("%f", &C);
	
	if (A+B+C<180)  {
		
		printf("Esse tri�ngulo n�o existe, pelo fato da soma dos �ngulos internos: %f + %f + %f ser menor que 180! \n", A, B, C);
	    exit(0);
	}
	
	if (A+B+C>180) {
		
		printf("Esse tri�ngulo n�o existe, pelo fato da soma dos �ngulos internos: %f + %f + %f ser maior que 180! \n ", A, B, C);
	    exit(0);
	}	

   if ((A==90) || (B==90) || (C==90)) {
   	
   	 printf("Por possuir um �ngulo reto (90) esse � um Tri�ngulo Ret�ngulo! \n ");
   }
   
   if ((A>90) || (B>90) || (C>90)) {
   	
   	printf("Por possuir um �nngulo maior que 90, esse tri�ngulo � um Obtus�ngulo! \n");
   }
   
   if ((A<90) && (B<90) && (C<90)) {
   	
   	printf("Tais �ngulos (todos menores que 90) correspondem a um Tri�ngulo Acut�ngulo! \n");
   }


system("PAUSE");

}


