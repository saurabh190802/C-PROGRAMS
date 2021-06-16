#include<stdio.h>
int isArmstrong(int ); 

int main()
{
  int number;

  printf("Enter number: ");
  scanf("%d",&number);

  if(isArmstrong(number) == 0)
  printf("%d is an Armstrong number.\n", number);
  else
  printf("%d is not an Armstrong number.", number);

  return 0;
}

int isArmstrong(int number) 
{

  // declare variables
  int reminder = 0;
  
  int sum = 0;

  // temporary variable to store number
  int n = number;

  while(n!=0) {

     // find last digit
     reminder= n % 10;

     // find power of digit (order = 3)
     

     // add power value into sum
     sum +=  reminder* reminder* reminder;

     // remove last digit
     n /= 10;
  }

  if(sum == number) return 0;
  else return 1;
}


