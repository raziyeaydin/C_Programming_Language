#include<stdio.h>
#include<conio.h>
int main(){
    
	char cumle[100];
	int i;
	
	puts("metni girin:");
	gets(cumle);
	
	for(i=0;cumle[i];i++){
         if(cumle[i] != ' ')
             printf("%c",cumle[i]);
         else
             if(cumle[i+1] != ' ')
                 printf("%c", cumle[i]);   	
    }
	getchar();
	return 0;
}
