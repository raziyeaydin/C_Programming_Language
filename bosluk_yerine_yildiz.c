#include<stdio.h>
#include<conio.h>
int main(){
    char cumle[100];
	int i;
	
	puts("cumlenizi girin:");
	gets(cumle);
	
	for(i=0;cumle[i];i++){
		if(cumle[i]==' '){
			cumle[i]='*';
		}
	}
	puts(cumle);
	getchar();
	return 0;
}
