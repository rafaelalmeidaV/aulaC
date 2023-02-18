#include <stdio.h>

int main(){
	
	int i;
	int faltas[8];
	int notas[8];
	
	for(i=0;i<8;i++){
		printf("digite a falta do aluno %d- ",i+1);
		scanf("%d", &faltas[i]);
		
		printf("digite a nota do aluno %d- ", i+1);
		scanf("%d", &notas[i]);
		printf("\n-----------------------------------\n");
	}
	
	
	
	for(i=0;i<8;i++){
		printf("\nFaltas do aluno-%d: %d", i+1, faltas[i]);
		
		printf("\nNotas do aluno-%d: %d", i+1, notas[i]);
		printf("\n-----------------------------------");
	}
	
}
