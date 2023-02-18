#include <stdio.h>

int main(){
	
	char hotel;
	int Cod=0,distancia=0,visitantes=0,tipo=0, c1=0,c2=0,c3=0,c4=0;
	
	do{	
	
		printf("codigo do hotel: ");
		scanf("%d", &Cod);
		
		printf(" distancia do centro: ");
		scanf("%d", &distancia);
		
		printf("numero de visitantes: ");
		scanf("%d", &visitantes);
		
		printf("tipo de acesso: ");
		scanf("%d", &tipo);
		
		printf("nome do hotel: ");
		scanf(" %s", &hotel);
				
		if(distancia>15){
			c2++;
		}	
		if(tipo == 0){
			c1++;
			c3 += visitantes;
		}		
				
		
	}while(Cod != 0);
	
	c4 = c3/c1;
	
	if( visitantes<1000 && tipo==1)
    printf("\nHotel %s Distancia %d km. Asfaltado com menos de 1.000 visitantes.",hotel,tipo);
	
	printf("\nHoteis a 15km do centro: %d\n",c2);
	
	printf("A media de visitantes nos hoteis com acesso sem asfalto : %d\n",c4);
}
