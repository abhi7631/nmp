#include<stdio.h>
float f(float x,float y)
{
	return (x+y);
}
main()
{
	float x,y,h,xp;
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
		y+=h*f(x,y);
		x+=h;
		printf("%f\n",y);
	}
}

