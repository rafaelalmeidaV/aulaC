#include <stdio.h>

int main(){
	
	
	int cont10=0,cont1015=0,cont15=0, i,usou;
	char resp;
	
	resp = 'n';
	while(resp=='n'){

		
		printf("quantas vezes voce utilizou a biblioteca? ");
		scanf("%d", &usou);
		
		if(usou<10){
			cont10=cont10+1;
		}
		if(usou>=10 && usou<=15){
			cont1015=cont1015+1;
		}
		if(usou>15){
			cont15=cont15+1;
		}
	
	printf("usaram menos que 10x: %d ", cont10);
	printf("\nusaram entre 10 e 15: %d ", cont1015);
	printf("\nusaram maior q 15: %d ", cont15);
		
		printf("\nquer parar agora ");
		scanf(" %c", &resp);
	}
	
	printf("temino do programa");
	return 0;
	
}
