#include<stdio.h>
int main(){
    struct ogrenci{
		char *isim[20];
		char *soyisim[20];
		int no;	
	};
	
	struct ogrenci a;
	
	printf("ogrencinin adini soyadini ve numarasini girin\n");
	scanf("%s %s %d",&a.isim,&a.soyisim,&a.no);
	
	puts("ogrenci bilgileri");
	puts(a.isim);
	puts(a.soyisim);
	printf("%d\n",a.no);
	
	return 0;
}
