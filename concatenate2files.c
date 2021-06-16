#include <stdio.h>
#include <stdlib.h>
 
int main() {
    FILE *f1, *f2, *f3;
 
    char ch, file1[30], file2[30], file3[30];
 
    printf("Enter name of first file\n");
    gets(file1);
 
    printf("Enter name of second file\n");
    gets(file2);
 
    printf("Enter name of the output files\n");
    gets(file3);
 
    f1 = fopen(file1, "r");   //opening the file for reading.
    f2 = fopen(file2, "r");
 
    if(f1 == NULL || f2 == NULL) {
        perror("Error ");
        printf("Press any key to exit...\n");
        exit(EXIT_FAILURE);
    }
 
    f3 = fopen(file3, "w");          // Opening in write mode
 
    if(f3 == NULL) {
        perror("Error ");
        printf("Press any key to exit...\n");
        exit(EXIT_FAILURE);
    }
 
    while((ch = fgetc(f1)) != EOF)
        fputc(ch,f3);
 
    while((ch = fgetc(f2)) != EOF)
        fputc(ch,f3);
 
    printf("The two files were concatenated into %s file successfully.\n", file3);
 
    fclose(f1);
    fclose(f2);
    fclose(f3);
 
    return 0;
}
