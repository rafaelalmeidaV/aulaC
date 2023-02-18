#include <stdio.h>

int main () {
	int i;
	float nota1, nota2, nota3, nota4, calculo, media[10], cont=0;
	for(i=0;i<10;i++){
		printf("informe as 4 notas do aluno %d", i+1);
		scanf("%f %f %f %f",&nota1,&nota2,&nota3,&nota4);
		calculo = (nota1+nota2+nota3+nota4)/4;
		media[i]= calculo;
	}
		for(i=0;i<10;i++) {
			if(media[i]>=7) cont++;
		}
	printf("quantidade de alunos com media superior a 7= %d", cont);
}

