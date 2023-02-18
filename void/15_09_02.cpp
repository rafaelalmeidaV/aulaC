#include <stdio.h>

void linha3(){
	
	int i;
	for(i=0;i<3;i++){
		printf("*");
	}
	printf("\n");
}


void linha6()
{
	int i;
	for(i=0;i<6;i++){
		printf("*");
	}
	printf("\n");
}

void linha9()
{
	int i;
	for(i=0;i<9;i++){
		printf("*");
	}
	printf("\n");
}

int main(){
	linha3();
	linha6();
	linha9();
	linha6();
	linha3();
}
