#include <stdio.h>

int main(){
	
	int a,b,total;
	char i;
	
	scanf("%d", &a);
	scanf(" %c", &i);
	scanf("%d", &b);
	
	switch (i){
		case '+': printf("a soma eh %d ",a+b); break;
		case '-': printf("a subtra��o eh %d ",a-b); break;
		case '*': printf("a multiplica��o eh %d ",a*b); break;
		case '/': printf("a divis�o eh %d ",a/b); break;
	}
	
	
	

	return 0;
}
