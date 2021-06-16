#include <stdio.h>
#include <string.h>
 
union Student {
   int roll;
   char name[50];
   float marks;
   
};
 
int main( ) {

   union Student std;        

   std.roll = 1;
   strcpy( std.name, "ram");
   std.marks = 22;
   

   printf( "student roll : %d\n", std.roll);
   printf( "student name : %s\n", std.name);
   printf( "student marks : %f\n", std.marks);
   

   return 0;
}
