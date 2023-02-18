#include <stdio.h>

void calculo(){
	int matriz[3][3],i,j;
	
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			printf("digite um numero");
			scanf("%d", &matriz[i][j]);
		}
	}
	
	
		for(j=0;j<3;j++){
			printf("%d \n %d \n %d \n", matriz[0][2], matriz[1][1], matriz[2][0]);
		}
		printf("\n");
	
	
}


int main(){	
	calculo();	

}
