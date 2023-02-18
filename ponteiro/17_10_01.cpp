#include <stdio.h>
#include <string.h>
	
int troca(char *p){
	int i, flag;
	for(i=0;i<20;i++){
		if(strcmp(*p, 'a') ){
			p == 'i';
		}
		if(strcmp(*p, 'e') ){
			p == 'i';
		}
		if(strcmp(*p, 'i')  ){
			p == 'i';
		}
		if(strcmp(*p, 'o')  ){
			p == 'i';
		}
		if(strcmp(*p, 'u') ){
			p == 'i';
		}
		
		printf("%s", *p);
		
	}
	
	
	
}
	
int main(){
	char frase[20];
	
	printf("digite uma frase? ");
	gets(frase);
	
	troca(frase);
	
	
	
	
}
