#include<stdio.h>
#include<locale.h>
 
 
 
int main(void){
	setlocale(LC_ALL,  "Portuguese");
	char nome[100];
	printf("digite seu nome: ");
	gets(nome);
	
	printf("seu nome é: %s",nome);
}
