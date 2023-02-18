#include <stdio.h>
#include <string.h>

int main(){
struct data{
	int dia, mes, ano;
};

struct endereco{
	char cidade[40], estado[2], rua[40], bairro[30];
};

struct aluno{
	char nome[40];
	struct data data_nascimento;
	struct endereco end;
};
struct aluno alunos[3];
int i;

for(i=0;i<3;i++){
	printf("digite o nome: ");
	gets(alunos[i].nome);
	printf("digite a data de nascimento dd mm aa");
	scanf("%d %d %d" , &alunos[i],data.nascimento.dia,&alunos[i].data_nascimento.mes,&alunos[i].data_nascimento.ano);
}

	
}
