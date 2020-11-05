//Data type are used to represent the format of our data or information
//We have int, char, double..... these are the basic data types in C
//Most of time we need to deal with the data type that should be stored to a variable

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int myNum = 7; //int.... represents only whole number, thats is 1,2,3,4,5........myNum is variable here
    double myCgpa = 7.2; //double.... represents decimal number, thats is 2.0,3.5....etc, myCgpa is variable here
    char myName[] = "Insane"; //char....represents string...here i have used "[]" means we can pass many character, myName is variable here

    //Now for example let me build a sample program to check the data types
    printf("My name is %s\n", myName);
    printf("I am %d years old\n", myNum);
    printf("My CGPA is %f\n", myCgpa);


    return 0;
}
