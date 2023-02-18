#include <stdio.h> 

int main() {
	
	int nota[4];
	int media=0;
	int i;
	
	for(i=0;i<4;i++) {
		printf("a nota da prova eh: ");
		scanf("%d", &nota[i]);		
		media = (nota[0] + nota[1] + nota[2] + nota[3])/4;			
	}
	
	for(i=0;i<=3;i++) {
		printf("\nas notas sao: %d", nota[i]);
	
	}
			
	printf("\na media eh: %d", media);
			
}
