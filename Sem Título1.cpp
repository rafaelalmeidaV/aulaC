#include <stdio.h>


/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	float nota1,nota2,media;
	
	printf("Digite a nota do aluno:");
	scanf("%f", &nota1);
	
	printf("Digite a segunda nota do aluno:");
	scanf("%f", &nota2);
	
	media = (nota1+nota2)/2;
	
	if(media>=6){
			printf("\naprovado");
			printf("\nSua media eh = %4.f", media);
	}
		
	else{
			printf("\nreprovado");
			printf("\nSua media eh = %4.f", media);
	}
 	
	
	
	
	return 0;
}
