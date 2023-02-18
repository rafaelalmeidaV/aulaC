#include <stdio.h>

int main(){
	
	int n,m,i,soma=0;
	
	printf("digite um numero: ");
	scanf("%d", &m);
	
	printf("digite um numero maior que o anterior: ");
	scanf("%d", &n);
	
	if(m>n)
	return 0;
	
	if(n>m){
		for(i=m;i<=n;i++)
		soma = soma + i;
	}
	printf(": %d", soma);
	
	return 0;
}
