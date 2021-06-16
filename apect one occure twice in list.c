#include<stdio.h>
int main()
{
	int n[10000],i,c=0,m;
	printf("enter the no of elements that are present in the list:\n");
	scanf("%d",&m);
	printf("enter the list:\n");
	for(i=0;i<m;i++)
	{
		scanf("%d",&n[i]);
	}
	for(i=0;i<m;i++)
	{
		if(n[i]==n[i+1])
		{
			c++;
		}
	}
	if(c>1)
	{
		printf("the number of elements ocuured twice is =%d\n",c);
		printf("WARNING!!!!...only one number can occur twice...");
	}
	else
	{
		printf("the number of elements ocuured twice is =%d\n",c);
		printf("the entered list is:\n");
	    for(i=0;i<m;i++)
	    {
		printf("%d \t",n[i]);
       	}	
	}
	return 0;
	
	
}
