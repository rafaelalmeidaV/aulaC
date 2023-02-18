#include <stdio.h> 

int main(){
	
		float n1, n2, media;
		char resp;
		
		resp = 'n';
		
		
	do{	
		
		printf("\ndigite a primeira nota");
		scanf("%f", &n1);
		
		if (n1 < 0 || n1 >10){
			printf("nota invalida\n");
			return 0;
		}
		
		printf("\ndigite a segunda nota");
		scanf("%f", &n2);
		
		
		if (n2 < 0 || n2 >10){
			printf("nota invalida\n");
			return 0;
		}
		
		media = (n1+n2)/2;
		printf("a media é %f", media);
		
		if(media < 7){
			printf("reprovado\n");
		}else{
			printf("aprovado\n");
		}	
		
		printf("voce quer digitar mais notas?");
		scanf(" %s", &resp);
		
		
	}while(resp != 'n');	
	
 	printf("fim do programa");
	
	
}
