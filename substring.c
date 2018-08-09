#include<stdio.h>
#include<string.h>
main()
{
	int i,k;
	char str1[]="geeksforpractice";
	char str2[]="practice";
	int len=strlen(str2);
	for(i=0;i<strlen(str1);i++)
	{
		int j;
		for(j=0;j<len;j++)
		{
			if(str1[i+j]!=str2[j])
			break;
		}
		if(j!=len)
		{
		continue;
	    }
		else
		{
			k=j;
		break;
	    }
	}
	if(k==len)
	{
		printf("%d\n",k);
		printf("found\n");
	}
		else
		{
			printf("%d\n",k);
		printf("not found\n");
	    }
}
