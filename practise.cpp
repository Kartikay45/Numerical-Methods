#include<stdio.h>
#include<conio.h>
#include<math.h>
#define f1(x,y,z) (4+y-2*z)/10
#define f2(x,y,z) (3-x-z)/10
#define f3(x,y,z) (7-2*x-3*y)/20

int main()
{
	float x0=0,y0=0,z0=0,x1,y1,z1,e1,e2,e3,e;
	int count=1;
	
	printf("enter tolerable error:");
	scanf("%f",&e);
	printf("\ncount\tx\ty\tz\n");
	do{
		x1=f1(x0,y0,z0);
		y1=f2(x0,y0,z0);
		z1=f3(x0,y0,z0);
	printf("%d\t%0.4f\t%0.4f\t%0.4f\n",count,x1,y1,z1);
	e1=fabs(x0-x1);
	e2=fabs(y0-y1);
	e3=fabs(z0-z1);
	count++;
	
	x0=x1;
	y0=y1;
	z0=z1;
	}while(e1>e && e2>e && e3>e);
	printf("\nsolution:x=%0.3f,y=%0.3f,z=%0.3f\n",x1,y1,z1);
	getch();
	return 0;
	
}
