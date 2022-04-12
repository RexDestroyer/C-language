#include<stdlib.h>
#include<locale.h>
#include<stdio.h>

main () {
	
	setlocale(LC_ALL,"Portuguese");
	
	float A, B, C;
	
	printf("Digite um dos ângulos: ");
	scanf("%f", &A);
	printf("Digite outro ângulo: ");
	scanf("%f", &B);
	printf("Digite mais um ângulo: ");
	scanf("%f", &C);
	
	if (A+B+C<180)  {
		
		printf("Esse triângulo não existe, pelo fato da soma dos ângulos internos: %f + %f + %f ser menor que 180! \n", A, B, C);
	    exit(0);
	}
	
	if (A+B+C>180) {
		
		printf("Esse triângulo não existe, pelo fato da soma dos ângulos internos: %f + %f + %f ser maior que 180! \n ", A, B, C);
	    exit(0);
	}	

   if ((A==90) || (B==90) || (C==90)) {
   	
   	 printf("Por possuir um ângulo reto (90) esse é um Triângulo Retângulo! \n ");
   }
   
   if ((A>90) || (B>90) || (C>90)) {
   	
   	printf("Por possuir um ânngulo maior que 90, esse triângulo é um Obtusângulo! \n");
   }
   
   if ((A<90) && (B<90) && (C<90)) {
   	
   	printf("Tais ângulos (todos menores que 90) correspondem a um Triângulo Acutângulo! \n");
   }


system("PAUSE");

}


