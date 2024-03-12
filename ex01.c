#include<stdio.h>
#include<locale.h>

int main(void){
setlocale(LC_ALL,"Portuguese");

int n1, n2, soma;

printf("digite dois números interos: ");
scanf("%d",&n1);
scanf("%d",&n2);
soma = n1+n2;
      fflush(stdin);
 	if(soma > 10)
	 {
 		printf("As SOMA dos números  que você digitou é maior que 10.\nentão o  resultado mais 8 é: %d", soma+8);
 		getchar();
	 }
	 
	  else 
	 { 
	 	printf("As SOMA dos números  que você digitou é menor ou igual a  10.\nentão o  resultado mais é: %d", soma+5);
	     getchar();
}

}
