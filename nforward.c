#include<stdio.h>
main()
{
	int i,j,n;
	float f[10][10]={0},y[10],x[10],s,p=1,xp,h,u;
	printf("\nENTER THE NO. OF POLES:");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("\nENTER THE VALUES OF X[%d]",i);
		scanf("%f",&x[i]);
	}

	for(i=0;i<n;i++)
	{
		printf("\nENTER THE VALUES OF Y[%d]:",i);
		scanf("%f",&y[i]);
	}
	printf("\nENTER THE VALUE OF Xp:");
	scanf("\n%f",&xp);

	h=(x[1]-x[0]);
	u=(xp-x[0])/h;
	s=y[0];	
	for(i=0;i<n;i++)
		f[0][i]=y[i];
	for(i=1;i<n;i++)
	{
		for(j=0;j<=n-i;j++)
			f[i][j]=f[i-1][j+1]-f[i-1][j];
	}	
	printf("\nThe Computation matrix is:");

	for(i=1;i<n;i++)
        {
                for(j=0;j<n;j++)
		printf("\t%f",f[i][j]);
	printf("\n");
        }
	for(i=1;i<n;i++)
	{
		p=(p*(u-i+1))/i;
		s=s+p*f[i][0];
	}
	printf("\nTHE RESULT IS %f",s);
}
