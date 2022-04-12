#include<stdlib.h>
#include<stdio.h>
#include<locale.h>


lado (float var1, float var2) {
	 if (var1 == var2) {
	 	printf("Esse polígono é um quadrado!");
	 }
	 if ((var1 > var2) || (var1 < var2)){
	 	printf("Esse polígono é um retângulo! ");
	 }
	 
}

int main (void) {
    setlocale(LC_ALL, "Portuguese");
    float n1, n2;  
      
    printf("Digite um lado: ");
    scanf("%f", &n1);
    
    printf("Digite o outro lado: ");
    scanf("%f", &n2);
    
    lado(n1, n2);

	
	printf("\n \n \n");
	system("PAUSE");
}
