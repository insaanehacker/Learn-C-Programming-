/*
Pointers are very important part in c program
Many find difficult to understand pointer
To make pointer definition so simple, we must consider pointer like a data type that can store memory location of a variable
Like the other data type namely: int,char,double...pointer is also another data type, that can store the memory address of a variable
We can define pointer variable by:
datatype *pVariable(Variable defined already) = &variable(defined variable);


*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    //We can define int variable:age and set it equal to age value
    int age = 23;
    //Now lets define pointer variable and set it equal to memory location of age by using "&"
    int *pAge = &age;

    //We can define char variable:name and set it equal to name value
    char name[] = "Pinky";
    //Now lets define pointer variable and set it equal to memory location of name by using "&"
    char *pName = &age;

    //We can define int variable:gpa and set it equal to gpa value
    double gpa = 6.7;
    //Now lets define pointer variable and set it equal to memory location of gpa by using "&"
    double *pGpa = &gpa;

    //We can define int variable:grade and set it equal to grade value
    char grade = 'S';
    //Now lets define pointer variable and set it equal to memory location of grade by using "&"
    char *pGrade = &grade;

    printf("%p", grade); //This will print the memory location of grade

    return 0;
}
