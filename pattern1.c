#include<stdio.h>
#include<stdlib.h>
main()
{
	int i,k,space,n;
	printf("enter n:\n");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		k=0;
		for(space=0;space<n-i;space++)
		printf(" ");
		while(k<2*i-1)
		{
		printf(" *");
		k++;
	    }
		printf("\n");
	}
}
