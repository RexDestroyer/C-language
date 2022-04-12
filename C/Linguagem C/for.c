#include<stdlib.h>
#include<locale.h>
#include<stdio.h>


int main (void) {
	
	setlocale(LC_ALL,"Portuguese");
    int i; 
    
    for(i = 1; i<=100; i = i+1) {
    	printf("%d \n", i); 	
	}

system("PAUSE");


}
