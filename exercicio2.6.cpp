#include <stdio.h> 

int main(){

	int andares=0, entrada=0, saida=0, final=0,total=0;
	
	printf("numero de andares do predio");
	scanf("%d", &andares);
	
	do{
		printf("numero de pessoas que entraram");
		scanf("%d", &entrada); 	
				
		printf("numero de pessoas que sairam");
		scanf("%d", &saida);
		
		andares--;			
		
		total=entrada-saida;
		
		printf("TOTAL %d\n",total);
		
		if(total>15){
			printf("“EXCESSO DE PASSAGEIROS. DEVEM SAIR");
			
			printf("Deve Sair: %d\n", total-15);

            final+=15-entrada;
		}else final+=entrada;
		
	}while(andares != 0);
	
	printf("Desceram: %d\n", final);

   return 0;
	
}
