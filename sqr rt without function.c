#include<stdio.h>    
int main()
 {  
    float n,i;
    printf("enter a number:");
    scanf("%f",&n);
    for(i=0.01;i*i<n;i=i+0.01);
		printf("\n The square root of %f is %.2f",n,i);
    return 0;
 }
