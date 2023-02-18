#include <stdio.h>


/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	char sexo;
	
	printf("qual seu genero: [M ou F]");
	scanf("%c",&sexo);
	
	if(sexo=='M' || sexo == 'm')
		printf("voce eh homem:");	
		else
			if(sexo == 'F' || sexo == 'f')
			printf("voce eh mulher");
				else
				printf("invalido");
		
	return 0;
}
