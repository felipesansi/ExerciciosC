#include<stdio.h>
#include<locale.h>

int main(void){
setlocale(LC_ALL , "portuguese");

     int n1, n2, n3, n4, op;
 
 	 printf("Digite um  n�mero inteiro: ");
 	 scanf("%d",&n1);
 	 printf("Digite mais um  n�mero inteiro: ");
 	 scanf("%d",&n2);
 	 
 	 
	  
	  if((n1 == 0) && (n2 == 0))
	  {
	  	printf("Os DOIS n�meros s�o IGUAIS A 0\n");
	  }
 	  
 	  if((n1==0 )&& (n2!=0))
	   {
 	  	printf("Somente o primeiro n�mero � igual A 0\n");
	   }
	   
 	  if((n1!=0 )&& (n2==0))
	   {
 	  	printf("Somente o segundo n�mero � igual A 0\n");
 	  }
 	  
	  if(n1 == n2)
	  {
   	printf("Os dois n�meros s�o IGUAIS\n");
	  }
 	  
    if(n1 >n2)
    {
    	printf("o primeiro numero � MAIOR que o  segundo ");
    		
	}
  	  
    if((2*n1>n2))
    {
	 printf("O dobro do primeiro � MAIOR que o segundo.");
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
 	
	 printf("Digite um  n�mero inteiro: ");
 	 scanf("%d",&n3);
 	 printf("Digite mais um  n�mero inteiro: ");
 	 scanf("%d",&n4);
 	 
 	 
	  
	  if((n3 == 0) && (n4 == 0))
	  {
    	printf("Os DOIS n�meros s�o IGUAIS A 0\n");
	  } 
	  else {
	  	printf("Os DOIS n�meros N�O s�o IGUAIS A 0\n");
	  }
 	 if(n3 == n4)
	  {
  	   printf("Os dois n�meros s�o IGUAIS\n");
	  	
	  }
	  
	  else
	  {
	  	printf("Os dois n�meros N�O s�o IGUAIS\n");
	  }
 	  
    if(n3 >n4)
    {
    	printf("O primeiro numero � MAIOR que o  segundo\n ");
    		
	}
	else
	{
		printf("O primeiro numero N�O � MAIOR que o  segundo\n ");
	}
  	  
    if((2*n3>n4))
    {
   	printf("O dobro do primeiro n�mero � MAIOR que o segundo.\n");
	}
 
  else
  {
	printf("O dobro do primeiro n�mero N�O � MAIOR que o segundo.\n");
  }
   fflush(stdin);
   getchar();
   }
   else
   {printf("Esse n�mero � invalido\n"); 
   }
 
 fflush(stdin);
 getchar();
 //-------------------------------------------------------------------------------------------------------------------------
 
 
	
 
 
 
}
