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
		case '-': printf("a subtra��o eh %d\n ",a-b); break;
		case '*': printf("a multiplica��o eh %d\n ",a*b); break;
		case '/': printf("a divis�o eh %d\n ",a/b); break;
	}
	printf("deseja mais? ");
		scanf(" %c", &resul);
	}
	

	return 0;
}
