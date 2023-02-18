#include <stdio.h>

int main(){
	
	int par=0,impar=0,num,i;
	
	for(i=1;i<=5;i++){
		printf("digite um numero");
		scanf("%d", &num);
		
		if(num %2==0)
			par = par +1;
		
		if(num %2!=0)
			impar = impar+1;
	}
	
	printf("quantidade de numeros pares:%d ", par);
	printf("quantiidade de impares:%d ", impar);
	return 0;
}
