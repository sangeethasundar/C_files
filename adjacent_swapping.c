#include<stdio.h>
main()
{
	int a[100],n,i,j,temp;
	printf("enter n and array elements\n");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	for(i=0;i<n-1;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(a[i]>a[j])
			{
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}
	}
	printf("after sorting\n");
	for(i=0;i<n;i++)
	printf("%d ",a[i]);
	
	for(i=0;i<n-1;i+=2)
	{
		temp=a[i];
		a[i]=a[i+1];
		a[i+1]=temp;
	}
	printf("after adjacent swapping\n");
	for(i=0;i<n;i++)
	printf("%d ",a[i]);
}
