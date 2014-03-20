#include<stdio.h>
int main(void){
    FILE*belge;
    int sayi_1,sayi_2;
    belge=fopen("deneme.doc","w");
    printf("bir sayi giriniz:");
    scanf("%d",&sayi_1);
    fprintf(belge,"sayi_1=%d\n",sayi_1);
    printf("bir sayi giriniz:");
    scanf("%d",&sayi_2);
    fprintf(belge,"sayi_2=%d\n",sayi_2);
    fprintf(belge,"sayilarin toplami:%d\n",(sayi_1+sayi_2));
    close(belge);
    getch();
    return 0;
}
