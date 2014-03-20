//3 kişilik telefon rehberi
#include<stdio.h>
int main(){
    int i;
	struct rehber{
		char *ad[20];
		char *soyad[20];
		int tel;
	};
	struct rehber kisi[3];
	for(i=0;i<3;i++){
		printf("%d. kisinin adi: ",i+1);
		scanf("%s",&kisi[i].ad);
		printf("%d. kisinin soyadi: ",i+1);
		scanf("%s",&kisi[i].soyad);
		printf("%d. kisinin telefon numarasi: ",i+1);
		scanf("%d",&kisi[i].tel);
	}
	for(i=0;i<3;i++){
		puts(kisi[i].ad);
		puts(kisi[i].soyad);
		printf("%d",kisi[i].tel);
		printf("\n");
	}
	getchar();
	return 0;
	
}
