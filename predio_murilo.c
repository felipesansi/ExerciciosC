#include<stdio.h>
#include<locale.h>

int main(void ){
	setlocale(LC_ALL,"Portuguese");
	int predio[0][0],an=0,ap=0,totalp,mult,p;
	//entrada de valores de apartamentos e andares
	printf("Digite quantos andares tem o predio : \n");
	scanf("%d",&an);
	printf("Digite quantos apartamentos tem cada andar : \n")		;
	scanf("%d",&ap);
	//número total de apartamentos dentro do prédio
	mult = an*ap;
	printf("O predio possui %d andares e %d apartamentos em cada andar,",an,ap);
	printf("\nTotalizando %d apartamentos\n\n\n", mult);
		//laço que lê e da a soma de pessoas dentro do prédio.
			for (mult=an*ap;mult>0;mult--){
				printf("\n\nDigite quantas pessoas moram no ap número %d° = \n",mult);
				scanf("%d",&p);
				totalp = totalp + p;
				
			}	
			printf("\nO número total de pessoas é : %d",totalp);
			return 0;
			getchar();
			
	}

