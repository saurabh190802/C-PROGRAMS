#include<stdio.h>
#include<string.h>
int main(){
	char s[1000];
	int i=0,c=0,d=0;
	gets(s);
   
	while(s[i]!='\0')
	
	{
	
		if(s[i]=='H')
		{
			c++;
		}
		if(s[i]=='V')
		{
			d++;
		}
		i++;
    }
	if(c>d)
	{
		printf("1");
	}
	else
	{
		printf("0");
	}
	
return 0;
	
}
