#include<stdio.h>
#include<locale.h>
int main(void){
	setlocale(LC_ALL, "Portuguese");
	int andares=0, andarCorrente = 1, moradores=0, aptoAndar=1, aptoCurrente=1, totalAndar=0, total=0;
	printf("Você é entrevistador do Censo\n e esta é a sua ferramenta para anotar suas pesquisas!");

		printf("\n Para iniciar digite quantos andares tem o prédio! ");
		scanf("%d",&andares);
	
		printf("\n Agora diga quantos apartamentos tem em cada andar: ");
		scanf("%d",&aptoAndar);
		printf("\n\n");system("pause");		
		
	do{
		system("cls");
		printf("\n \t Estamos no andar: %d", andarCorrente);
			while(aptoCurrente<=aptoAndar){
				printf("\n \t \tApto n%c: %d",248,aptoCurrente);
				printf("\n Digite quantas pessoas moram no apto %d: ",aptoCurrente);
				scanf("%d",&moradores);
				totalAndar += moradores;
				aptoCurrente ++;		
			}
			total += totalAndar;
			printf("\n No andar %d vivem %d pessoas!\n ",andarCorrente, totalAndar );
			printf("Até aqui vivem %d pessoas no prédio.\n\n",total);
			system("pause");
			
		totalAndar = 0;	
		aptoCurrente = 1;
		andarCorrente += 1;	
	}while(andarCorrente<=andares);

		system("cls");
		printf("No geral vivem no prédio %d pessoas.\n\n",total);
	
	system("\npause");
	return 0;
}
