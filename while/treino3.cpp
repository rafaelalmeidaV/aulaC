#include <stdio.h>

int main(){
	
	int a,b,cont1=0,cont2=0;
	
	for(a=1;a<=3;a++){
		
		printf("digite um numero ");
		scanf("%d", &b);
		
		if(b>=10 && b<=150){
			cont1 = cont1 + 1;
		}else{
			cont2 = cont2 + 1;
		}
		
	}
	printf("os numeros entre 10 e 150 sao %d \n",cont1);
	printf("os numeros fora de 10 e 150 sao %d", cont2);
	
}
