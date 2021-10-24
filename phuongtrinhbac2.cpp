#include <stdio.h>
#include <math.h>
int main (){
	//
	int a,b,c;
	float x1,x2;
	printf("Nhap so thu nhat=");
	scanf("%d",&a);
	printf("nhap so thu hai=");
	scanf("%d",&b);
	printf("nhap so thu ba=");
	scanf("%d",&c);

	if(a==0){
		if(b==0){
			if(c==0){
			printf("phuong trinh vo so nghiem");
			}else{
			printf("PT vo nghiem");			
			}
		}else{	
			float x=-c/b;
			printf("pt có nghiem:%f",x);}
		}
	else{
		float delta = b*b - 4*a*c;
		if(delta<0){
			printf("pt vo nghiem");
		}else{
			if(delta==0){
				float x12 = -b/(2*a);
				printf("pt co nghiem kep:%f",x12);
			}else{
				float x2 = (-b-sqrt(delta))/(2*a);
				float x1 = (-b+sqrt(delta))/(2*a);
			
			printf("nghiem thu nhat:%f", x1);
			printf("nghiem thu hai:%f", x2);
			}
		}
	
	}
}

