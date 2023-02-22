//struct using typedef keyword. 
#include <stdio.h>
#include <string.h>

typedef struct Student
{
    int rollNo;
    char name[20];
    int marks;
}Student;

void main()
{

    Student s1;
    Student s2;

    s1.rollNo = 1001;
    strcpy(s1.name, "Sinan");
    s1.marks = 80;

    s2.rollNo = 1002;
    strcpy(s2.name, "Bathis");
    s2.marks = 65;


    printf("Roll No : %d\n", s1.rollNo);
    printf("Name : %s\n", s1.name);
    printf("Marks : %d\n", s1.marks);

    printf("\nRoll No : %d\n", s2.rollNo);
    printf("Name : %s\n", s2.name);
    printf("Marks : %d\n", s2.marks);

}