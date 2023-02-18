#include <stdio.h>

int main(){
	
	int num=1, soma=0;
	
	while(num<=10){
		soma+=num++;
	}
	printf("o resultado eh %d ", soma);
}
