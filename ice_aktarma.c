#include<stdio.h>
int main(void){
...
int fonksiyon_1(void){
  fonksiyon_3();
  uyku(2);
  return 0;}
 
int fonksiyon_2(void){
  fonksiyon_1();
  uyku(1);
  return 0;}
 
int fonksiyon_4(void){
  fonksiyon_2();
  uyku(2);
  return 0;}
 
}
...
void uyku(int);
...
void fonksiyon_3(void){
  printf("calismaya baslandi.\n");
}
