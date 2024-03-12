#include<stdio.h>
#include<locale.h>
#include<string.h>

int main(void){
setlocale(LC_ALL,"Portuguese");

char uf[4];	 
	 printf("Digite a UF de um estado em letras MINUSCULAS: ");
	 gets(uf);
	 
	if(strcmp(strlwr(uf), "sp")==0){
	 printf("Este cidadão é Paulista.");
	 fflush(stdin);
	  getchar();
	} else if( strcmp (strlwr(uf),"rj")==0){
		printf("Este cidadão é carioca");
		fflush(stdin);
	    getchar();
	} else
	{ printf("outro estado");
	  fflush(stdin);
	  getchar();
	}
}
