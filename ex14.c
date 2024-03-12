
#include<stdio.h>
#include<locale.h>

int main(void){
setlocale(LC_ALL,"portuguese");
 int p;
 
 
 for(p=100; p<201; p++){
 	printf("%d par\n", p);
 	
 p=	p+1;
 
 	
 	
 }
 
 for(p=201; p<3001; p++){
 	printf("%d\n", p);
 	
 p=	p+2;
 
 	
}


}
