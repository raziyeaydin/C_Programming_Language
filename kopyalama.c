#include<stdio.h>
#include<conio.h>
int main(){
    char str1[100];
	char str2[100];
	int i;
	
	puts("cumleyi giriniz:");
	gets(str1);
	
	for(i=0;i<strlen(str1);i++){
		str2[i]=str1[i];
	}
	printf("%s",str2);
	getchar();
	return 0;
}
