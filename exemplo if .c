
#include<stdio.h>
#include<locale.h>

int main(void){
setlocale(LC_ALL , "portuguese");

  int idade = 16;
  float sal = 1500;
 
	if((idade>= 17 ) && (sal>=900))
	{
	  	printf("pode ir ao pdm");
		
	}
	 else
	{
		printf("NÃO pode ir ao pdm");
	}
	
	
	
	

}

