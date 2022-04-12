#include<stdlib.h>
#include<stdio.h>
#include<locale.h>

numero(){
	return 10;
}

ola() {
	printf("XABLAU");
}

soma (int var1, int var2) {
	return var1 + var2;
}

int main (void) {
    setlocale(LC_ALL, "Portuguese");
     intl1, cal2;    
      cal1 = 5;
      cal2 = 3;
      
      
      ntf("O valor da soma é : %d \n \n ", soma( cal1, cal2));  
      
    printf("\n %d\n \n \n", numero());
	ola();
	printf("\n \n \n");
	system("PAUSE");
}
