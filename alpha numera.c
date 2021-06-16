#include<stdio.h>
#include<string.h>
void main()
{
	char str[10000];
	int i,a=0,b=0,k;
	printf("give some input:\n");
	for(i=0;str[i-2]!='E'&&(str[i-1]!='n'&& str[i]!='d');i++)
	{
		scanf("%c",&str[i]);
	}
	k=i-3;
	printf("%d",k);
	
	for(i=k;i>=0;i--)
	{
		if(k==4 && ((str[0]>='A' || str[0]<='Z') || (str[0]>='a' || str[0]<='z') )
		{
			a=1;
		}
		 if((str[i]>=0 || str[i]<=9) && (str[0]!>='A' || str[0]!<='Z') || (str[0]!>='a' || str[0]!<='z'))
		{
			b=1;
		}
	}
	if(a)
	{
		printf("alpha");
	}
	if(b)
	{
		printf("numera");
	}
}


