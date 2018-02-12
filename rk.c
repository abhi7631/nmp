#include<stdio.h>
float f(float x,float y)
{
	return (x+y);
}
main()
{
	float x,y,h,xp,k1,k2,k3,k4,k;
	printf("\nENTER x::");
	scanf("%f",&x);
	printf("\nENTER y::");
        scanf("%f",&y);
	printf("\nENTER h::");
        scanf("%f",&h);
	printf("\nENTER xp::");
        scanf("%f",&xp);
	while(x<xp)
	{
		k1=h*f(x,y);
		k2=h*f(x+h/2,y+k1/2);
		k3=h*f(x+h/2,y+k2/2);
		k4=h*f(x+h,y+k3);
		k=(k1+2*k2+2*k3+k4)/6;
		x=x+h;
		y=y+k;
		printf("%f\n",y);
	}
}

