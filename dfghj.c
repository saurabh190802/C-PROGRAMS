#include<stdio.h>
#include<string.h>
void main()
{
	char s[10000];
	int i,a=0,b=0,k;
	printf("give some input:\n");
	for(i=0;s[i-2]!='E'&&(s[i-1]!='n'&& s[i]!='d');i++)
	{
		scanf("%c",&s[i]);
	}
	for(i=0;s[i-2]!='E'&&(s[i-1]!='n'&& s[i]!='d');i++)
{
if(s[i]=='0'||s[i]=='1'||s[i]=='2'||s[i]=='4' || s[i]=='3'||s[i]=='5'||s[i]=='6'||s[i]=='7'||s[i]=='8'||s[i]=='9')
{
a=a+1;
}
k=a+3;
}
if(k==strlen(s))
{
	printf("numera");;
}
	
else if(strlen(s)==4)
{ if(a==0){

    if((s[0]<='z' || s[0]>='a') )
    {
    	printf("alpha");
	}
}}}
