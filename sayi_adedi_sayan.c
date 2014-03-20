#include<stdio.h>
#include<conio.h>
int main(){
    char cumle[100];
	int sayi0=0;
	int sayi1=0;
	int sayi2=0;
	int sayi3=0;
	int sayi4=0;
	int sayi5=0;
	int sayi6=0;
	int sayi7=0;
	int sayi8=0;
	int sayi9=0;
	int i;
	
	puts("metninizi girin: ");
	gets(cumle);
	
	for(i=0;cumle[i];i++){
		if(cumle[i]=='0'){
			sayi0++;
		}
		else if(cumle[i]=='1'){
			sayi1++;
		}
		else if(cumle[i]=='2'){
			sayi2++;
		}
		else if(cumle[i]=='3'){
			sayi3++;
		}
		else if(cumle[i]=='4'){
			sayi4++;
		}
		else if(cumle[i]=='5'){
			sayi5++;
		}
		else if(cumle[i]=='6'){
			sayi6++;
		}
		else if(cumle[i]=='7'){
			sayi7++;
		}
		else if(cumle[i]=='8'){
			sayi8++;
		}
		else if(cumle[i]=='9'){
			sayi9++;
		}
	}
	printf("0 rakamindan %d tane var.\n",sayi0);
	printf("1 rakamindan %d tane var.\n",sayi1);
	printf("2 rakamindan %d tane var.\n",sayi2);
	printf("3 rakamindan %d tane var.\n",sayi3);
	printf("4 rakamindan %d tane var.\n",sayi4);
	printf("5 rakamindan %d tane var.\n",sayi5);
	printf("6 rakamindan %d tane var.\n",sayi6);
	printf("7 rakamindan %d tane var.\n",sayi7);
	printf("8 rakamindan %d tane var.\n",sayi8);
	printf("9 rakamindan %d tane var.\n",sayi9);
 
	getchar();
	return 0;
}
