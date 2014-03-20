#include<stdio.h>
int main(void){
    int sayi;
    int ok_1;
    int ok_2;
    int ok_3;
    int ok_4;
    sayi=2413;
    
    ok_1=sayi/1000;
    switch(ok_1){
                 case 1: printf("bin");
                 break;
                 case 2: printf("ikibin");
                 break;
                 case 3: printf("üçbin");
                 break;
                 case 4: printf("dörtbin");
                 break;
                 case 5: printf("beşbin");
                 break;}
                 
    ok_2=(sayi/100)%10;
    switch(ok_2){
                 case 1: printf("yüz");
                 break;
                 case 2: printf("ikiyüz");
                 break;
                 case 3: printf("üçyüz");
                 break;
                 case 4: printf("dörtyüz");
                 break;
                 case 5: printf("beşyüz");
                 break;}
                 
    ok_3=(sayi/10)%10;
    switch(ok_3){
                 case 1: printf("on");
                 break;
                 case 2: printf("yirmi");
                 break;
                 case 3: printf("otuz");
                 break;
                 case 4: printf("kırk");
                 break;
                 case 5: printf("elli");
                 break;}
                 
    ok_4=(sayi)%10;
    switch(ok_4){
                 case 1: printf("bir");
                 break;
                 case 2: printf("iki");
                 break;
                 case 3: printf("üç");
                 break;
                 case 4: printf("dört");
                 break;
                 case 5: printf("beş");
                 break;}
    getch();                        
    return 0;
}          
