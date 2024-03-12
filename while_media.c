
#include<stdio.h>
#include<locale.h>

int main(void){
setlocale(LC_ALL,"portuguese");
 int c=1,op=1;
 float num,total,media;
 while(op!=0){
 	
 	
 	printf("Digite a primeira nota: ");
 	scanf("%f",&num);
 
	 total = total + num;
	 media = total / c;
	 printf(" %f - %f -  %f\n  ",num,total, media);
	 c++;
	 
	 getchar();
 	printf("Digite  um número diferente de zero: ");
 	scanf("%d",&op);
 
}

}
