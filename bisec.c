#include<stdio.h>
#include<math.h>
float f(float x)
{
	return ((x*x*x)-(4*x)-9);
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
	x0=i;
	x1=i+1;
	printf("\nROOT LIES BETWEEN %f AND %f",x0,x1);
	do
	{
		x=(x0+x1)/2.0;
		if(f(x0)*f(x)<0)
			x1=x;
		else
			x0=x;
		printf("\nITERATION::%d   APPROX. ROOT::%f",++j,x);
	}while(fabs(f(x)) > e);

}
 

