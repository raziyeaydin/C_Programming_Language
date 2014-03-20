#include<stdio.h>
int main(){
  int i;
	int k=1;
	int a=2;
	printf("\tn\t\t2^n\n");
	printf("       -------------------\n");
	for(i=0;i<=16;i++){
		k=k*a;
		printf("\t%2d\t%6d\n",i,k/2);
	}
}
