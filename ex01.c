#include<stdio.h>
#include<locale.h>

int main(void){
setlocale(LC_ALL,"Portuguese");

int n1, n2, soma;

printf("digite dois n�meros interos: ");
scanf("%d",&n1);
scanf("%d",&n2);
soma = n1+n2;
      fflush(stdin);
 	if(soma > 10)
	 {
 		printf("As SOMA dos n�meros  que voc� digitou � maior que 10.\nent�o o  resultado mais 8 �: %d", soma+8);
 		getchar();
	 }
	 
	  else 
	 { 
	 	printf("As SOMA dos n�meros  que voc� digitou � menor ou igual a  10.\nent�o o  resultado mais �: %d", soma+5);
	     getchar();
}

}
