#include<stdio.h>
#include<conio.h>
 
int main(){
  
	char cumle[100];
	char sesli[10]={'a','e','i','o','u','A','E','I','O','U'};
	int i,j;
	int sayi=0;
	puts("...Turkce karakter kullanmayiniz...");
	puts("cumlenizi giriniz: ");
	gets(cumle);
	
	for(i=0;cumle[i];i++){
		for(j=0;j<10;j++){
			if(cumle[i]==sesli[j]){
				sayi++;
			}
		}
	}
	printf("%d",sayi);
	getchar();
	return 0;
}
