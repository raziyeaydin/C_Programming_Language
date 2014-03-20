#include<stdio.h>
int *topla(int,int);
int *topla(int x,int y){
  int *ptr,toplam;
	toplam=x+y;
	ptr=&toplam;
	return ptr;
}
main(){
	int a,b;
	int *p;
	printf("sayi girin:");
	scanf("%d",&a);
	printf("sayi girin:");
	scanf("%d",&b);
	
	
	p=topla(a,b);
	printf("toplam: %d \n",*p);
}
