#include<stdio.h>
#include<string.h>
main()
{
	char str[100],a;
	int i,j;
	printf("enter string\n");
	scanf("%s",str);
	int n=strlen(str);
	for(i=0,j=n-1;i<n/2;i++,j--)
	{
		a=str[j];
		//printf("%c\n",a);
		str[j]=str[i];
			//printf("%c\n",str[j]);
		str[i]=a;
			//printf("%s\n",str);
	}
	printf("answer:\n");
	printf("%s\n",str);
}
