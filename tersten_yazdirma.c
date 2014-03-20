#include<stdio.h>
#include<conio.h>
int main(){
    char *cumle;
        cumle=(char *) malloc(sizeof(char) * 100);
    int i,k;
    puts("cumlenizi giriniz");
	gets(cumle);
	k=strlen(cumle);
	for(i=k-1;i>=0;i--){
		printf("%c",cumle[i]);
	}
	getchar();
	return 0;
}
