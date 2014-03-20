#include<stdio.h>
#include<ctype.h>
int main(void){
  int c;
	for( ; ; ){
		c=getchar();
		if(isupper(c)){
			c=tolower(c);
		}
		else if(islower(c)){
			c=toupper(c);
		}
		putchar(c);
	}
	return 0;
}
