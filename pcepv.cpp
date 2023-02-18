#include <stdio.h>

int main(){
	
	int pc,pv,i, lucro,prejuizo;
	
	for(i=1;i<=3;i++){
		
		printf("pc: ");
		scanf("%d", &pc);
		
		printf("pv: ");
		scanf("%d", &pv);
		
		lucro = pv-pc;
		prejuizo = pc-pv;
		
			if(lucro>prejuizo){
				
				printf("lucro %d\n", lucro);
			}			
			
			if(prejuizo>lucro){
				
				printf("prejuizo %d\n", prejuizo);
			}
			
			if(prejuizo==lucro)
				printf("empate");	
			
		}
	
	
		return 0;
		
		
		
		
	}


