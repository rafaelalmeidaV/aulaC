#include <stdio.h>

int main(){
	
	int nota,i, maior,menor,media,cont=0;
	
	maior = 0;
	menor = 10;
	media = 0;
	
	
	
	for(i=1;i<=5;i++){
		
		printf("nota");
		scanf("%d", &nota);
	
		if(nota >=0 && nota <=10){		
					
			if(nota<menor)
			menor=nota;
			
			media = media + nota;
			cont=cont+1;
			
			if(nota>maior)
			maior=nota;
	}else{
		printf("numero invalido");
		return 0;
	}
	
}
	printf("a maior nota: %d ", maior);
	printf("a menor nota: %d ", menor);
	printf("a media nota: %d ", media/cont);
	
}
