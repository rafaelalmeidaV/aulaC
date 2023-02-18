#include <stdio.h>

int main(){
	
	int nota;
	
	printf("digite a nota\n");
	scanf("%d", &nota);
	
	if(nota==0){
		printf("nota E");
		
	}else if(nota>=1 && nota<=35){
		printf("nota D");
		
	}else if(nota>=36 && nota<=60){
		printf("nota C");
		
	}else if(nota>=61 && nota<= 85){
		printf("nota B");
		
	}else {
		printf("nota A");
	}

	
	
	
	
	
	return 0;
}
