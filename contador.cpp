#include <stdio.h>

int main(){
	
	int m,n,contador=0,i;
	
	printf("escreva um numero: ");
	scanf("%d", &m);
	
	printf("escreva um numero maior: ");
	scanf("%d", &n);
	
	if(m>n)
	printf("erro");
	
	if(n>m){
		for(i=m;i<=n;i++){
			contador+=i;
		}
		
	}
	printf("soma dos numeros %d ", contador );
	
	
}
