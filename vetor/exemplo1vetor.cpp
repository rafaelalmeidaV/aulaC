#include <stdio.h>

int main(){
	
	int i;
	int numero[5];
	
	for(i=0;i<5;i++){
		printf("digite o °%d", i+1, "numero");
		scanf("%d", &numero[i]);
	}
	
	for(i=0;i<5;i++){
		printf("\nos numeros digitados foram %d", numero[i]);
	}
	
}
