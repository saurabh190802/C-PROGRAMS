#include<stdio.h>
int main()
{
	int a[1000],n,i,j,k,c=0;
	printf("enter the size of the array:");
	scanf("%d",&n);
	printf("enter the elements of the array:");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("\nenter a number:");
	scanf("%d",&k);
	for(i=0;i<n;i++)
	{
		if(a[i]==k)
		{
			c++;
			j=i;
		}
	}
	if(c>1)
	{
		printf("WARNING!!!!....the number ocuurs more than once..");
	}
	else if(c==0)
	{
		printf("Number not found");
	}
	else
	{
		printf("index of the number is : %d",j);
	}
	
}
