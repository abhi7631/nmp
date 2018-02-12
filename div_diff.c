#include<stdio.h>
main()
{
	int i,j,n;
	int y[10]={150,392,1452,2366,5202},x[10]={5,7,11,13,17},s=0,p,xp,f[10][10]={0};
	printf("\nENTER THE NO. OF POLES:");
	scanf("%d",&n);
	/*for(i=0;i<n;i++)
	{
		printf("\nENTER THE VALUES OF X[%d]=",i);
		scanf("%f",&x[i]);
	}

	for(i=0;i<n;i++)
	{
		printf("\nENTER THE VALUES OF Y[%d]=",i);
		scanf("%f",&y[i]);
	}*/
	printf("\nENTER THE VALUE OF Xp:");
	scanf("\n%d",&xp);
	for(i=0;i<n;i++)
		f[0][i]=y[i];
	
	for(i=1;i<n;i++)
	{
		for(j=0;j<n-i;j++)
		
			f[i][j]=(f[i-1][j+1]-f[i-1][j])/(x[j+i]-x[j]);
	}
	s=y[0];p=1;
	for(i=1;i<n;i++)
	{
		p=p*(xp-x[i-1]);
		s=s+p*f[i][0];
	}
	printf("\nTHE TABLE IS::\n");
	printf("X:");
	for(i=0;i<n;i++)
        {
	        for(j=0;j<n;j++)
                	printf("%d\t",f[i][j]);
		printf("\n");
	}       
	printf("\nTHE RESULT IS: %d\n",s);
}
