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
	printf("\nROOT LIES BETWEEN %d AND %d",x0,x1);
	do
	{
		x=(x0*f(x1)-x1*f(x0))/(f(x1)-f(x0));
		if(f(x0)*f(x)<0)
			x1=x;
		else
			x0=x;
		printf("\nITERATION::%d   APPROX. ROOT::%f\n",++j,x);
	}while(fabs(f(x)) > e);

}
 

