// trapezoidal


#include<stdio.h>
#define f(x) 1/(1+x*x)
int main()
{
 float h,a,b;
 printf("Enter lower limit");
 scanf("%f",&a);
 printf("Enter upper limit");
 scanf("%f",&b);
 
 int n=6;
 h=(b-a)/n;
 
 float x[20],y[20],sum=0;
 
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
 if(i==0||i==n){
 sum=sum+y[i];
 }
 else{
 sum=sum+2*(y[i]);
 }
 }
 
 printf("%f\n",(h/2)*sum);
 
}



