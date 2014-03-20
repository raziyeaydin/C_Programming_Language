#include<stdio.h>
int main(){
    
	
	struct sekil{
		int x1;
		int x2;
		int y1;
		int y2;
	};
	struct sekil dortgen1;
	struct sekil dortgen2;
	
	
	printf("1.dikdortgenin x1,x2,y1,y2 sini sirayla giriniz: ");
	scanf("%d,%d,%d,%d",&dortgen1.x1,&dortgen1.x2,&dortgen1.y1,&dortgen1.y2);
	
	printf("2.dikdortgenin x1,x2,y1,y2 sini sirayla giriniz: ");
	scanf("%d,%d,%d,%d",&dortgen2.x1,&dortgen2.x2,&dortgen2.y1,&dortgen2.y2);
	
	if(dortgen1.x1<dortgen2.x1){
		if(dortgen1.y1>dortgen2.y2 ){
			puts("kesismiyorlar");
		}
		else{
			if(dortgen1.y1<dortgen2.y1){
				if(dortgen1.y2>dortgen2.y2){
					if(dortgen1.x2>dortgen2.x2){
						puts("icindedir");
					}
					puts("kesisiyorlar");
				}
				else if(dortgen1.y2<dortgen2.y1){
					puts("kesismiyorlar");
				}
				else{
					puts("kesisiyorlar");
				}
			}
			else{
				if(dortgen1.y2>dortgen2.y1){
					if(dortgen1.x1<dortgen2.x1){
						if(dortgen1.x2>dortgen2.x2){
							puts("icindedir");
						}
						else{
							if(dortgen1.x2>dortgen2.x1){
								puts("kesisiyorlar");
							}
							else{
								puts("kesismiyorlar");
							}
						}
					}
					else if(dortgen1.x1>dortgen2.x2){
						puts("kesismiyorlar");
					}
				}
			}
		}
	}
	getchar();
	return 0;
 
}
