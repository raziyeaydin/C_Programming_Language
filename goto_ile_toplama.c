#include <stdio.h>
int main(void){
  int toplam,x,y;
	toplam=0;
	printf("ilk sayi: ");
	scanf("%d",&x);
	printf("ikinci sayi: ");
	scanf("%d",&y);
 
	etiket1:
	toplam=toplam+x;
	x=x+1;
    if(x<y)
    
    goto etiket1;
    
	else
 		toplam=toplam+y;
 	printf("toplam=%d",toplam);
 	return 0;
}
