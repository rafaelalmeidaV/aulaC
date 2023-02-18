#include <stdio.h>


/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	float nota1, nota2, media, frequencia;
	
	printf("qual a nota1\n");
	scanf("%f",&nota1);
	
	printf("qual a nota2\n");
	scanf("%f", &nota2);
	
	printf("qual a frequencia\n");
	scanf("%f", &frequencia);
	
	media = (nota1+nota2)/2;
	
	if(media >= 7 && frequencia >= 75){
		printf("aprovado com media %.2f, frequencia %.1f",media,frequencia );
	}
 	else{
 		printf("reprovado com media %.2f, frequencia %.1f",media,frequencia);
	 }
	
	
	
	return 0;
}
