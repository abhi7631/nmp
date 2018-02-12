#include<stdio.h>
main()
{
	int i,j,n;
	float y[10],x[10],s=0,p,xp;
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
	
	for(i=0;i<n;i++)
	{
		p=1;
		for(j=0;j<n;j++)
		{
			if(i!=j)
				p=p*((xp-x[j])/(x[i]-x[j]));
		}
		s=s+p*y[i];
	}	
	printf("\nTHE TABLE IS::\n");
	printf("X:");
	for(i=0;i<n;i++)
             printf("%f\t",x[i]);
       	printf("\nF(X):");
        for(i=0;i<n;i++)
                printf("%f\t",y[i]);
        

	printf("\nTHE RESULT IS %f:\n",s);
}
