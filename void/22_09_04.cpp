#include <stdio.h>
void proced(int n1){
	
	if(n1%2 == 0){
		printf("par");
	}else{
		printf("impar");
	}
	
}





int main(){
	
int  num1;
	printf("digite um numero ");
	scanf("%d", &num1);
	
	
	
	proced(num1);
	
	
}
