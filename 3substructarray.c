#include <stdio.h>

//defining structure
struct Marks {
    int roll_no;
    char name[30];
    float chem_marks, maths_marks, phy_marks;
};

//main function
int main() {
	
    struct Marks marks[5];
    int i;
    
    //Getting user input for info of the 5 students
    for( i=0; i<5; i++){
		printf("Student %d\n",i+1);
        printf("Enter roll no. :\n");
        scanf("%d", &marks[i].roll_no);
        printf("Enter name :\n");
        scanf("%s",marks[i].name);
        printf("Enter Chemistry marks :\n");
        scanf("%f", &marks[i].chem_marks);
        printf("Enter Maths marks :\n");
        scanf("%f", &marks[i].maths_marks);
        printf("Enter Physics marks :\n");
        scanf("%f", &marks[i].phy_marks);
    }
    
    // Calculating and printing percentage for each student
	printf("\n\tName\tRollNo\tchem_marks\tmaths_marks\tphy_marks\n");
        for(i=0; i<5; i++)
                printf("\t%s\t\t%d\t\t%.2f\t\t%.2f\t\t%.2f\n", marks[i].name, marks[i].roll_no, marks[i].chem_marks,marks[i].maths_marks,marks[i].phy_marks);

  return 0;
}


