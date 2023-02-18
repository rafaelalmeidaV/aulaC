#include <stdio.h>

int main(){
	
	int nota1,nota2,i,media, cont=0, mediasala=0;
	
	for(i=1;i<=3;i++){
		printf("primeira nota");
		scanf("%d", &nota1);
		
		printf("segunda nota");
		scanf("%d", &nota2);
		
		media= (nota1 + nota2)/2;
		
		if(media>=6){
			printf("aprovado\n");
			cont=cont+1;
			
		}else{
			printf("reprovado\n");
		}
		
		mediasala=mediasala+media;
		
		
	}
	printf("media da sala:%d ", mediasala/5);
	
	
}
