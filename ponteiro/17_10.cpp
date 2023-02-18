#include <stdio.h>
	
int troca(int *i, int *j){
	int temp;
	temp = *i;
	*i = *j;
	*j = temp;	
	}
	
int main(){
	int v1, v2;
	
	printf("digite o valor 1 ");
	scanf("%d", &v1);
	printf("digite o valor 2 ");
	scanf("%d", &v2);
	troca(&v1,&v2);
	printf("valor1 %d\n", v1);
	printf("valor2 %d", v2);
	
	
	
	
	
	
}
