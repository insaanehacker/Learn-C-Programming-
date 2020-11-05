//printf function is used to print the data or output t the console
//we use printf with multiple data types
//Comma plays an important role in specifying data type
//char, int,double......are format specifiers
//%s ...........represents string or text data type
//%d ...........represents integer or whole number data type
//%c ........... represents single character
//char ........ represents string data type
//int ......... represents integer data dype
//Whenever we want to use single character we must use only ' ' and not " "

#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("I love %s", "vollyball\n"); //Here %s is the placeholder, which represents string data type....then i specified comma then i gave a string name "vollyball"
                                     // When we run the program we get output as "I love vollyball" , where %s will be replaced by the string "vollyball"

    printf("My favorite number is %d\n", 7); //Here %d is the placeholder, which represents integer data type....then i specified comma then i gave a whole number 7
                                     // When we run the program we get output as "My favorite number is 7" , where %d will be replaced by the integer 7

    printf("My favorite decimal number is %f\n", 7.6); //Here %d is the placeholder, which represents double data type....then i specified comma then i gave a decimal number 7.6
                                     // When we run the program we get output as "My favorite decimal number is 7.6" , where %f will be replaced by the decimal 7.6

    printf("My Grade is %c\n", 'P'); //Here %c is the placeholder, which represents single string data type....then i specified comma then i gave a single string "p"
                                     // When we run the program we get output as "My Grade is P" , where %c will be replaced by the single character "p"

    //Now lets use variables
    int myNum = 7; //int.... represents only whole number, thats is 1,2,3,4,5........myNum is variable here
    double myCgpa = 7.2; //double.... represents decimal number, thats is 2.0,3.5....etc, myCgpa is variable here
    char myGrade = 'P';
    char myName[] = "Insane"; //char....represents string...here i have used "[]" means we can pass many character, myName is variable here

    //Now for example let me build a sample program to check the data types
    printf("My name is %s\n", myName);
    printf("I am %d years old\n", myNum);
    printf("My CGPA is %f\n", myCgpa);
    printf("My Grade is %c, which means pass\n", myGrade);

    //When we run the program, we get output as My name is Insane, I am 7 years old, My CGPA is 7.200000, My Grade is P, which means pass

    printf("\n%s is %c, which means you pass the exam\n", myName, myGrade);
    // When we run the program, we get output as "Insane is P, which means you pass the exam


    return 0;
}
