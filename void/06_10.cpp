#include <stdio.h>
#include <string.h>

void funcao(char palavra[100], char letra){
	int tamanho = strlen(palavra);
	int i, cont=0;	
	
	for( i =0; i<tamanho; i++){
		if(letra == palavra[i]){
			cont = i+1;
			printf("%d\n", cont);
		}
	}
		
	
}



int main(){	
	
	char palavra[100], letra;
	
	
	printf("digite uma palavra ");
	gets(palavra);
	
	printf("digite uma letra ");
	scanf(" %c", &letra);
	
	funcao(palavra, letra);
	
	
	
}
