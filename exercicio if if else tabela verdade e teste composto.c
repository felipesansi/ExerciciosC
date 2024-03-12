#include<stdio.h>
#include<locale.h>

int main(void){
setlocale(LC_ALL , "portuguese");

     int n1, n2, n3, n4, op;
 
 	 printf("Digite um  número inteiro: ");
 	 scanf("%d",&n1);
 	 printf("Digite mais um  número inteiro: ");
 	 scanf("%d",&n2);
 	 
 	 
	  
	  if((n1 == 0) && (n2 == 0))
	  {
	  	printf("Os DOIS números são IGUAIS A 0\n");
	  }
 	  
 	  if((n1==0 )&& (n2!=0))
	   {
 	  	printf("Somente o primeiro número é igual A 0\n");
	   }
	   
 	  if((n1!=0 )&& (n2==0))
	   {
 	  	printf("Somente o segundo número é igual A 0\n");
 	  }
 	  
	  if(n1 == n2)
	  {
   	printf("Os dois números são IGUAIS\n");
	  }
 	  
    if(n1 >n2)
    {
    	printf("o primeiro numero é MAIOR que o  segundo ");
    		
	}
  	  
    if((2*n1>n2))
    {
	 printf("O dobro do primeiro é MAIOR que o segundo.");
	}
 
     fflush(stdin);
     getchar();

	 printf("Digite 1 ou 5 para continuar... : ");
 	 scanf("%d",&op);
 	
     if((op==1)||(op==5))
     {
   system ("cls");
   //-----------------------------------------------------------------------------------------------------------------------
    printf("EXERCICIO 2 IF COM ELSE\n\n");
 	
	 printf("Digite um  número inteiro: ");
 	 scanf("%d",&n3);
 	 printf("Digite mais um  número inteiro: ");
 	 scanf("%d",&n4);
 	 
 	 
	  
	  if((n3 == 0) && (n4 == 0))
	  {
    	printf("Os DOIS números são IGUAIS A 0\n");
	  } 
	  else {
	  	printf("Os DOIS números NÃO são IGUAIS A 0\n");
	  }
 	 if(n3 == n4)
	  {
  	   printf("Os dois números são IGUAIS\n");
	  	
	  }
	  
	  else
	  {
	  	printf("Os dois números NÃO são IGUAIS\n");
	  }
 	  
    if(n3 >n4)
    {
    	printf("O primeiro numero é MAIOR que o  segundo\n ");
    		
	}
	else
	{
		printf("O primeiro numero NÃO é MAIOR que o  segundo\n ");
	}
  	  
    if((2*n3>n4))
    {
   	printf("O dobro do primeiro número é MAIOR que o segundo.\n");
	}
 
  else
  {
	printf("O dobro do primeiro número NÃO é MAIOR que o segundo.\n");
  }
   fflush(stdin);
   getchar();
   }
   else
   {printf("Esse número é invalido\n"); 
   }
 
 fflush(stdin);
 getchar();
 //-------------------------------------------------------------------------------------------------------------------------
 
 
	
 
 
 
}
