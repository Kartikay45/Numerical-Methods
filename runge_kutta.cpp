// runge-kutta

#include<stdio.h>
#include<conio.h>
#define f(x,y) (x-y)/(x+y)

int main(){
	int i,n;
	float x0,y0,h,xn,k1,k2,k3,k4,x,y,k;
	
	printf("enter the values:x0,y0,h,xn:-");
	scanf("%f%f%f%f",&x0,&y0,&h,&xn);
	
	n=(xn-x0)/h;
	x=x0;
	y=y0;
	for(i=0;i<=n;i++){
		k1=h*f(x,y);
		k2=h*f(x+h/2.0,y+k1/2.0);
		k3=h*f(x+h/2.0,y+k2/2.0);
		k4=h+f(x+h,y+k3);
		k=(k1+(k2+k3)*2.0+k4)/6.0;
		printf("\n\tX=%f,Y=%f",x,y);
		
		x=x+h;
		y=y+k;
	}
}


/*
int main(){
int i,n;
float x0,y0,h,xn,k1,k2,k3,k4,x,y,k;

printf("\n enter the values:x0,y0,h,xn:-")
scanf()
n=(xn-x0)/h;
x=x0;
y=y0;
for(i=0;i<=n;i++){
k1=h*f(x,y);
k2=h*f(x+h/2.0,y+k1/2.0);
k3=h*f(x+h/2.0,y+k2/2.0);
k4=h*f(x+h,y+k3);
k=(k1+(k2+k3)*2.0+k4)/6.0;

printf("\nX=%f Y=%f");
x=x+h;
y=y+h;
}
}*/

