#include <stdio.h>
float findValueAt(float x)
{
	return x*x*x - 2*x -5;
}

float bisect(float x1,float x2)
{
	return (x1+x2)/2;
}
int main()
{
	int maxIteration,i=1;
	float x1,x2,x;
	printf("enter the maximum no of iterations\n");
	scanf("%d",&maxIteration);
	
	do
	{
		printf("enter the value of x1 and x2(starting boundary)");
		scanf("%f%f",&x1,&x2);
		if(findValueAt(x1)*findValueAt(x2)>0)
		{
			printf("roots are Invalid\n");
			continue;
		}
		else
		{
			printf("roots lie between %f and %f\n",x1,x2);
			break;
		}
	}while(1);
	while(i<=maxIteration)
	{
		x=bisect(x1,x2);
		if(findValueAt(x)*findValueAt(x1)<0)
		   x2=x;
		else if(findValueAt(x)*findValueAt(x2)<0)
		   x1=x;
		printf("Iterations=%d Roots=%f\n",i,x);
		
		i++;
		
	}
	printf("roots=%f total Iterations=%d",x,--i);
	
	return 0;
}
