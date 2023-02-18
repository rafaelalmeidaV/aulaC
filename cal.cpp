#include <stdio.h>

int main(){
	
	int a,b,total;
	char i,resul='s';
	
	
	
	while(resul = 's'){
		
		
		scanf("%d", &a);
		scanf(" %c", &i);
		scanf("%d", &b);
	
	switch (i){
		case '+': printf("a soma eh %d\n ",a+b); break;
		case '-': printf("a subtração eh %d\n ",a-b); break;
		case '*': printf("a multiplicação eh %d\n ",a*b); break;
		case '/': printf("a divisão eh %d\n ",a/b); break;
	}
	printf("deseja mais? ");
		scanf(" %c", &resul);
	}
	

	return 0;
}
