#include <stdio.h>
void proced(int n1){
	
	if(n1 < 16){
		printf("nao eleitor");
	}
	else if(n1 > 18 && n1 <= 65){
		printf("eleitor obrigatorio");
	} 
	else if(n1 >= 16 && n1 <= 18){
		printf("eleitor facultativo");
	}
	else if(n1 > 65){
		printf("eleitor facultativo");
	}
}





int main(){
	
int  num1;
	printf("digite sua idade ");
	scanf("%d", &num1);
	
	
	
	proced(num1);
	
	
}
