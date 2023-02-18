#include <stdio.h>

void linha(){
	
	int i;
	for(i=0;i<20;i++){
		printf("*");
	}
	printf("\n");
}


void imprime()
{
	printf("	Ola\n");
}

int main(){
	linha();
	imprime();
	linha();
	linha();
}
