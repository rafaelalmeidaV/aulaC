#include <stdio.h>

int main () {
	int i,x=0,y=0,numero[5],par[5],impar[5];
	
	for(i=0;i<5;i++) {
		printf("numero: ");
		scanf("%d", &numero[i]);
	}
	
	
	
	for(i=0;i<5;i++) {
		if(numero[i] %2 == 0) {
			par[x]= numero[i],x++;
		}
		else {
			impar[y]= numero[i], y++;
		}
	}
		printf("\n NUMEROS PARES \n");
		for(i=0;i<x;i++) {
			printf("\n %d", par[i]);
		}
		printf("\n NUMEROS IMPARES \n");
		for(i=0;i<y;i++) {
			printf("\n %d", impar[i]);
		}
}

