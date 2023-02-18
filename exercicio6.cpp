#include <stdio.h>

int main(){
	
	int pcusto, vcusto, i, lucro, prejuizo, empate;
	
	for(i=0;i<=3;i++){
		
		printf("digite o custo do produto ");
		scanf("%d", &pcusto );
		
		printf("digite o preço de venda do produto ");
		scanf("%d", &vcusto);
		
		lucro = vcusto - pcusto;
		prejuizo = pcusto - vcusto;
		
		
		if(lucro>prejuizo){
			printf("produto %d lucro\n ", lucro);
		}else
			if(prejuizo>lucro){
			printf("prejuizo - %d \n", prejuizo);
			}else{
				if(lucro==prejuizo)
				printf("empate");
			}
		
		
	}
	
}
