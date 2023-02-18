#include <stdio.h>

int main(){
	
	int a,b,total;
	char i;
	
	scanf("%d", &a);
	scanf(" %c", &i);
	scanf("%d", &b);
	
	switch (i){
		case '+': printf("a soma eh %d ",a+b); break;
		case '-': printf("a subtração eh %d ",a-b); break;
		case '*': printf("a multiplicação eh %d ",a*b); break;
		case '/': printf("a divisão eh %d ",a/b); break;
	}
	
	
	

	return 0;
}
