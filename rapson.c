#include<stdio.h>
#include<math.h>
float f(float x)
{
	return ((x*x*x)-(4*x)-9);
}
float df(float x)
{
	return (3*x*x-4);
}

void main()
{
	int i,j=0;
	float x0,x1,x,e=0.0001;
	for(i=0;i<=100;i++)
	{
		if(f(i)*f(i+1)< 0)
			break;
	}
	x0=(i+1);
	printf("\nROOT LIES BETWEEN %f AND %f",x0,x1);
	do
	{
		x1=x0-(f(x0)/df(x0));
		x0=x1;
		printf("\nITERATION::%d   APPROX. ROOT::%f\n",++j,x1);
	}while(fabs(f(x1)) > e);
}
 

