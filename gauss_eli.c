#include<stdio.h>
main()
{
	float a[10][10],x[10],m,s;
	int i,j,k,n;
	printf("\nENTER THE SIZE OF THE MATRIX::");
	scanf("%d",&n);
	printf("\nENTER THE ELEMENTS::\n");
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n+1;j++)
			scanf("%f",&a[i][j]);
	}
	printf("\nELEMENTS ARE::\n");
        for(i=1;i<=n;i++)
        {
                for(j=1;j<=n+1;j++)
                        printf("%f\t",a[i][j]);
		printf("\n");
        }
	for(i=1;i<=n-1;i++)
        {
                for(j=i+1;j<=n;j++)
		{
			m=a[j][i]/a[i][i];
			for(k=i;k<=n+1;k++)
				a[j][k]=a[j][k]-m*a[i][k];
		}
	}
	x[n]=a[n][n+1]/a[n][n];
	for(i=n-1;i>=1;i--)
	{
		s=0;
		for(j=i+1;j<=n;j++)
		{
			s+=a[i][j]*x[j];
			x[i]=(a[i][n+1]-s)/a[i][i];
		}
	}
	printf("\nUPPER TRIANGULAR MATRIX ::\n");
        for(i=1;i<=n;i++)
        {
                for(j=1;j<=n+1;j++)
                        printf("%f\t",a[i][j]);
                printf("\n");
        }

	for(i=1;i<=n;i++)
	{
		printf("\nVALUES OF X[%d]",i);
		printf(" IS %f",x[i]);
	
	}
}
