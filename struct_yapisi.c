#include<stdio.h>
int main(){
         struct point{
                int x,y;
                };
                struct point p1,p2;
                    int alan;
                    p1.x=2;
                    p1.y=6;
                    p2.x=5;
                    p2.y=2;
                    alan=(p1.y-p2.y)*(p2.x-p1.x);
                    printf("%d",alan);
                    getch();
}
