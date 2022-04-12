#include<stdlib.h>
#include<stdio.h>
#include<locale.h>

ola() {
	printf("XABLAU");
}

maior (int var1, int var2, int result) {
	 if (var1 < var2) {
	 	result = var2;
	 }
	 if (var1 > var2) {
	 	result = var1;
	 }
	 return result;
}

int main (void) {
    setlocale(LC_ALL, "Portuguese");
    int n1, n2, result1;  
      
    printf("Digite um valor: ");
    scanf("%d", &n1);
    
    printf("DIgite outro valor: ");
    scanf("%d", &n2);
    
    printf("O maior é : %d \n \n ", maior(n1, n2, result1)); 

    
	ola();
	printf("\n \n \n");
	system("PAUSE");
}
