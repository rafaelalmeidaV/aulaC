#include <stdio.h>

int main() {
	int v[30], i;
	float  media =0;
	
	for(i=0;i<8;i++) {
		printf("digite um numero: ");
		scanf("%d", &v[i]);
		
		media = media + v[i];
	}
	
	media = media/8;
	
	printf("Media = %2.f \n", media);
	
	for(i=0;i<8;i++) {
		if(v[i]>media)
			printf("%d \n", v[i]);
	}
}
