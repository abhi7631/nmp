#include<stdio.h>
main()
{
	int i,j,k,n;
	float a[10][10],m,x[10];
	system("clear");
	printf("\nENTER THE CONSTRAINTS::");
	scanf("%d",&n);
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
			if(i!=j)
			{
				m=a[j][i]/a[i][i];
				for(k=i;k<=n+1;k++)
					a[j][k]=a[j][k]-m*a[i][k];
			}
		}	
	}
	printf("\nAUGMENTED MATRIX IS::\n");
        for(i=1;i<=n;i++)
        {
                for(j=1;j<=n+1;j++)
                        printf("%f\t",a[i][j]);
                printf("\n");
        }

	for(i=1;i<=n;i++)
	{
		x[i]=a[i][n+1]/a[i][i];
		printf(" VALUE OF X[%d] is %f\n",i,x[i]);
	}
}

