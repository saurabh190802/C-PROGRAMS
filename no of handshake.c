#include<stdio.h>
int main()
 {
    int n;
    printf("enter the number of people in a room:");
    scanf("%d",&n);
    printf("\n the number of handshakes is %d",n*(n-1)/2);
    return 0;
 }
