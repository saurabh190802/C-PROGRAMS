#include <stdio.h>
 
int main ()
 
{
	int n ,m, i ,j, k[1000],count=0,a;
	printf("enter a number: ");
	scanf("%d" , &n);
	m=n;
	while(m!=0)  
   {  
       m=m/10;  
       count++;  
   }  
   
  
	
    for(i=count-1;i>=0;i--)
    {
    	k[i]=n%10;
    	n=n/10;
	}
	
   
 

 
 for (i=0; i<count; ++i)
 
 {
 
   for (j=i+1; j<count; ++j)
 
   {
 
     if (k[i] > k[j])
 
     {
 
       a= k[i];
 
       k[i] = k[j];
 
       k[j] = a;
 
     }
 
   }
 
 }
 
 printf ("\n entered number after sorting:");
 
 for (i=0; i<count; ++i)
 
 printf ("%d",k[i]);
 
}
