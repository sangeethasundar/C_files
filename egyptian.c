#include<stdio.h>
#include<stdlib.h>
void egyptian(int nr,int dr);
main()
{
 int nr=6,dr=14;
 egyptian(nr,dr);
}

void egyptian(int nr,int dr)
{
	if(nr==0 || dr==0)
	return;
	
	if(nr%dr==0)
	{
	printf("%d+",nr/dr);
	return;
    }
    
	if(dr%nr==0)
	{
		printf("1/%d+",dr/nr);
	return;
	}
	
	
	if(nr>dr)
	{
	printf("%d+",nr/dr);
	egyptian(nr%dr,dr);
	return;	
	}
	
	if(dr>nr)
	{
		int n=dr/nr+1;
		printf("1/%d+",n);
		egyptian(nr*n-dr,dr*n);
		return;
	}
}

