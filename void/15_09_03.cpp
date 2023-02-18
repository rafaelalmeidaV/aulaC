#include <stdio.h>

void gasto(){
	int distancia;
	printf("digite a distacia percorrida");
	scanf("%d", &distancia);
	
	int gasolina;
	printf("digite a gasolina consumido");
	scanf("%d", &gasolina);
	
	int conta;
	conta = (distancia/gasolina);
	printf("o consumo medio eh %d ", conta);
}


int main(){
	gasto();
}
