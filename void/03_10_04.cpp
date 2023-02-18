#include <stdio.h>

int valida(){
	int i, num, maior=0, menor=1001;
	
	for(i=1;i<=15;i++){

	do{
		printf("digite um numero entre 1 e 1000: ");
		scanf("%d", &num);
	}while(num<1 || num>1000);
	
	if(num>maior)
		maior=num;
	if(num<menor)
		menor=num;	
}

printf("\nMaior: %d", maior);
printf("\nMenor: %d", menor);
}



int main(){
	
	valida();
}

