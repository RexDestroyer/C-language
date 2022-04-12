#include<stdlib.h>
#include<stdio.h>
#include<locale.h>



lado (float var1, float var2, float var3) {
	 
	 
	 if ((var1 == var2) && (var2 == var3)) {
	 	printf("Esse triângulo é equilátero!");
	 }
	 
	 if ((var1 != var2 ) && (var2 != var3) && (var1 != var3)) {
	 	printf("Esse triângulo é escaleno! ");
	 }
	 
	 if ( ((var1 == var2) && (var2 != var3)) || ((var1 == var3) && (var3 != var2)) || ((var2 == var3) && (var2 != var1)) ) {
	    printf("Esse triângulo é isósceles!");
	 }
}



int main (void) {
    setlocale(LC_ALL, "Portuguese");
    float n1, n2, n3;  
      
    printf("Digite um lado: ");
    scanf("%f", &n1);
    
    printf("Digite o outro lado: ");
    scanf("%f", &n2);
    
    printf("Digite mais um lado: ");
    scanf("%f", &n3);
    
    printf("\n");
    lado(n1, n2, n3);

	printf("\n \n");
	system("PAUSE");
}
