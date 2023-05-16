#include <stdio.h>
#include <math.h>
#define EPSILON 0.0001
float findValueAt(float x)
{
	return x*x*x -2*x -5;
}
float findX(float x1,float x2)
{
	return (x1*findValueAt(x2) - x2*findValueAt(x1)) / (findValueAt(x2) - findValueAt(x1));
	
}
int main()
{
	int maxIteration,i=1;
	float x1,x2,x3,x;
	printf("enter maximum no of iterations\n");
	scanf("%d" ,&maxIteration);
	
	do
	{
		printf("enter the value of x1 and x2");
		scanf("%f%f",&x1,&x2);
		if(findValueAt(x1)*findValueAt(x2)>0)
		{
			printf("roots are invalid\n");
			continue;
		}
		else
		{
			printf("roots lie between %f and %f\n",x1,x2);
			break;
		}
	}while(1);
	
	x=findX(x1,x2);
	
	do
	{
		if(findValueAt(x)*findValueAt(x1<0))
		x2=x;
		else
		x1=x;
		printf("iterations=%d roots=%f\n",i,x);
		x3=findX(x1,x2);
		if(fabs(x3-x)<EPSILON)
		{
			printf("roots=%f total iterations=%d",x,i);
			return 0;
		}
		x=x3;
		i++;
	}while(i<=maxIteration);
	printf("root=%f total iterations=%d",x,--i);
	
	return 0;
}
