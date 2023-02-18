#include <stdio.h>

int main(){
	
	int i,num,contNum=0;
	
	for(i=1;i<=4;i++){
		printf("digite um numero: ");
		scanf("%d", &num);
		
		if(num>=10 && num<=150)
			contNum+=1;
		
		
	}
	printf("a quantidade de numeros no intervalo de 10 e 150 eh:%d ", contNum);
	
	return 0;
}
