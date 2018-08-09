#include<stdio.h>
#include<string.h>
void sort(char s[100],int len);
main()
{
	char s1[100],s2[100];
	int i,len1,len2,flag=0;
	printf("enter two strings\n");
	scanf("%s%s",s1,s2);
	len1=strlen(s1);
	len2=strlen(s2);
	if(len1!=len2)
	printf("strings are not anagram\n");
	else
	{
	sort(s1,len1);
	//printf("sorted string:%s\n",s1);
	sort(s2,len2);
	for(i=0;i<len1;i++)
	{
		if(s1[i]==s2[i])
		flag=0;
		else
		{
			flag=1;
			break;
		}
	}
	if(flag==0)
	printf("strings are anagram\n");
	else if(flag==1)
	printf("strings are not anagram\n");
	}
}
void sort(char s[100],int len)
{
	int i,j;
	char temp;
   for(i=0;i<len-1;i++)
   {
   	for(j=i+1;j<len;j++)
   	{
   		if(s[i]>s[j])
   		{
   			temp=s[j];
   			s[j]=s[i];
   			s[i]=temp;
   		}
   	}
   }	
}
