#include <stdio.h>

int main(){
	
	float a,b,c;
	
	printf("primeiro lado do triangulo");
	scanf("%f", &a);
	
	printf("segundo lado do triangulo");
	scanf("%f", &b);
	
	printf("terceiro lado do triangulo");
	scanf("%f", &c);
	
	if(a+b<c && b+c<a && c+a<b){
		printf("triangulo invalido");
	}
	
		else
			if(a==b && a==c && b==c){
				printf("seu triangulo é equilatero");
			}
			
				else				
					if( a==b || a==c || b==c){					
						printf("seu triangulo é isoceles");
					}
					
						else							
								printf("seu triangulo é escaleno");
}
							

				
		
		
		
	
	
	
	
	
	
	
	
	
	
	
	

	
	



