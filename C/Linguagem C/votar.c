#include<stdlib.h>
#include<locale.h>

main () {
	
	setlocale(LC_ALL,"Portuguese");
	
   int ano;
   
   printf("Digite o seu ano de nascimento para saber se pode ou n�o votar. \n");
   scanf("%d", &ano);
   
   if (ano < 2006) {
   	
   	printf("Voc� j� pode h� um tempo exercer seu direito de Voto.");
   	
   } else
   	
   	if (ano == 2006) {
	 
	 printf("Esse ano voc� j� pode exercer seu direito de Voto.");
	
	   } else
	   
	   if (ano > 2006) {
	   	
	   	printf("Infelizmente voc� n�o tem idade suficiente para votar.");
	   } else
   	
   system("PAUSE");
   
}
   


