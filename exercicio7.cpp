#include <stdio.h>



int main(){
   
   float altura, menor, media, maior;
   char sexo, sexoMaior;
   int i, contM;
   
   menor=3;
   maior=0;
   media=0;
   contM=0;
   
   for(i=1; i<3; i++){
   	printf("informe a altura: ");
   	scanf("%f", &altura);
   	printf("informe o sexo: ");
   	scanf(" %c", &sexo);
   	
   	if (altura<menor)
   		menor=altura;
   		
   	if(sexo=='M' || sexo=='m'){
   		media=media+media;
   		contM=contM+1;
	   }
	if(altura>maior){
		maior=altura;
		sexoMaior=sexo;
	}
	
   }
   
   printf("\nA menor altura do grupo é: %f", menor);
   printf("\nA media de altura dos meninos é: %f", media/contM );
   printf("\nO mais alto da turma possui: %f e sexo %c", maior,sexoMaior);
   
    return 0;
}
