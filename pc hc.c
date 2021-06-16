#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{
    int i;
    char ch,s[50],sen[50];
    scanf("%c\n",&ch);
    scanf("%s\n",&s[50]);
    for(i=0;sen[i]!='\0';i++)
    {
    	scanf("%c",&sen[i]);
	}
    printf("%c\n",ch);
    puts(s);
    
    for(i=0;sen[i]!='\0';i++)
    {
    	printf("%c",sen[i]);
	}
    
}
