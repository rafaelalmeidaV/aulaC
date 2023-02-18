#include <stdio.h>

int main(){
	
	int i,aprovados,MediaSala=0;
	double media,a,b;
	
	for(i=1;i<=5;i++){
		printf("digite a primeira nota do aluno ");
		scanf("%d", &a);
		printf("digite a segunda nota do aluno ");
		scanf("%d", &b);
		
		media = (a + b)/2;
		
		printf("media do aluno %f\n ", media);
		
		if(media>=6){
			printf("o aluno foi aprovado\n");
			MediaSala+=media;			
		}else{
			printf("aluno reprovado\n");
		}
						
	}
	printf("media  da sala:%d ", MediaSala);
	
	
}
