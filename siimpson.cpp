// simpson 3/8


#include<stdio.h>
#define f(x) 1/(1+x*x)


int main()

{
	float h,a,b;
	
	printf("enter the value of lower limit");
	scanf("%f",&a);
	
	
	printf("enter the value of upper limit");
	scanf("%f",&b);
	
	int n=6;
	h=(b-a)/n;
	
	
	float x[20],y[20];
	float sum=0;
	
	for(int i=0;i<n+1;i++){
		x[i]=a+i*h;
	
	}
	
	for(int i=0;i<n+1;i++){
		printf("%f\n",x[i]);
	}
	
	for(int i=0;i<n+1;i++){
		y[i]=f(x[i]);
	}
	
	
	for(int i=0;i<n+1;i++){
		printf("%f\n",y[i]);
	}
	
	for(int i=0;i<n+1;i++){
		if(i==0|i==n){
			sum=sum+y[i];
		}
		else if(i%3==0){
			sum=sum+2*y[i];
		}
		else{
			sum=sum+3*y[i];
		}
	}
	
	printf("%f\n",sum*(3*(h/8)));
}
