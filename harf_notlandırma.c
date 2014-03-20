#include<stdio.h>
#include<conio.h>
int main(){
    int not;
	
	printf("notunuzu girin: \n");
	scanf("%d",&not);
	
	if(not>=85){
		printf("A aldiniz.\n");
	}
	else if(not>=70){
		printf("B aldiniz.\n");
	}
	else if(not>=55){
		printf("C aldiniz.\n");
	}
	else if(not>=45){
		printf("D aldiniz.\n");
	}
	else{
		printf("kaldiniz\n");
	}
 
}
