#include<stdio.h>

int main()
{
	int n , i , k[5];
	printf("enter a 5 digit number: ");
	scanf("%5d" , &n);
    for(i=4;i>=0;i--)
    {
    	k[i]=n%10;
    	n=n/10;
	}
	
	printf("output=%d",(k[0]*1)+(k[1]*4)+(k[2]*9)+(k[3]*16)+(k[4]*25));
	return 0;
	

}
