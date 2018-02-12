#include<stdio.h>
main()
{
	int i,j,k,n,app;
	float a[10][10],m,x[10],s;
	system("clear");
	printf("----GAUSS SEIDAL----");
	printf("\nENTER THE CONSTRAINTS::");
	scanf("%d",&n);
	printf("\nENTER THE INITIAL APPROXIMATION::");
	scanf("%d",&app);
	for(i=1;i<=n;i++)
		x[i]=app;
	printf("\nENTER THE AUGMENTED MATRIX::\n");
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n+1;j++)
			scanf("%f",&a[i][j]);
	}
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n;j++)
		{
			if((a[i][i]<a[i-1][j-1])||(a[i][i]<a[i+1][j+1]))
			{
				printf("\nMATRIX IS NOT DIAGONALLY DOMINENT");
				
			}
		}
	}
	for(k=1;k<=15;k++)
	{
		for(i=1;i<=n;i++)
		{
			s=a[i][n+1];			
			for(j=1;j<=n;j++)
			{
				if(i!=j)
					s=s-a[i][j]*x[j];
			}
			x[i]=s/a[i][i];
		}
		printf("AT K=%d,",k);
		for(i=1;i<=n;i++)
			printf("   X[%d]=%f  ",i,x[i]);	
		printf("\n");
	}

}

