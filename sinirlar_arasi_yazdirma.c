#include<stdio.h>
int main(){
  int a;
	int b;
	int i;
	printf("alt siniri giriniz: \n");
	scanf("%d",&a);
	printf("ust siniri giriniz:\n");
	scanf("%d",&b);
	printf("\n");
	for(i=a;i<=b;i++){
		printf("%d  ",i);
	}
	printf("\n\nBu kadar !");
}
