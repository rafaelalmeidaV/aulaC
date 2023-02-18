#include <stdio.h>

int main(){
	
	int m,n,i, num=0;
	
	printf("digite um valor");
	scanf("%d", &m);
	
	printf("digite um valor maior que o anterior");
	scanf("%d", &n);
	
	if(m>n){
		printf("leia o enunciado e tente novamente");
	
	}if(n>m){
		for(i=m;i<=n;i++){
			num += i;
		}
		printf("a soma dos numeros é igual %d ", num );
	}
	
	
	
	
	
	
	
	
}
