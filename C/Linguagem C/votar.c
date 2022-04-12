#include<stdlib.h>
#include<locale.h>

main () {
	
	setlocale(LC_ALL,"Portuguese");
	
   int ano;
   
   printf("Digite o seu ano de nascimento para saber se pode ou não votar. \n");
   scanf("%d", &ano);
   
   if (ano < 2006) {
   	
   	printf("Você já pode há um tempo exercer seu direito de Voto.");
   	
   } else
   	
   	if (ano == 2006) {
	 
	 printf("Esse ano você já pode exercer seu direito de Voto.");
	
	   } else
	   
	   if (ano > 2006) {
	   	
	   	printf("Infelizmente você não tem idade suficiente para votar.");
	   } else
   	
   system("PAUSE");
   
}
   


