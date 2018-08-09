#include<stdio.h>
#include<string.h>
main()
{
	char s[200];
	int i,j,flag=0,len,first[26]={0};
	printf("enter string\n");
	scanf("%[^'\n']s",s);
	len=strlen(s);
	for(i=0;i<len;i++)
    {
        if(s[i]==' ')
            continue;
        else
        first[s[i]-'a']++;
    }
    for(i=0;i<26;i++)
    {
    	printf("%d ",first[i]);
        if(first[i]<1)
        {
            flag=1;
            break;
        }
        else
        {
            flag=0;
            continue;
        }
    }
    printf("\n");
    if(flag==0)
        printf("panagram\n");
    else if(flag==1)
        printf("not a panagram\n");
}
