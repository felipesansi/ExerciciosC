#include<stdio.h>
#include<locale.h>



int main(void){
setlocale(LC_ALL,"portuguese");
int c=0;
float num, total;
float media;
 
 for(c=0;  c>=3; c++){
 	printf("Digite a primeira nota: ");
 	scanf("%f",&num);
 	
	 total = total + num;
	 media = total / (c+1);
	 printf(" %f - %f -  %f  ",num,total, media);
 }









	
}

