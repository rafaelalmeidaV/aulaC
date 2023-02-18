#include <stdio.h>

void verifica(){
	int i;
	for(i=1000;i<=2000;i++){
		if(i % 11 == 5){
			printf("%d", i);
		}
	}
	
}


int main{
	verifica();	
}

