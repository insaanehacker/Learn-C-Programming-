//In c to print data we must use printf
//%s ...........represents string or text data type
//%d ...........represents integer or whole number data type
//Variables are the container to store informations and we can able to retrieve it when needed in our program
//char ........ represents string data type
//int ......... represents integer data dype

#include <stdio.h>    //These are header files
#include <stdlib.h>


int main()
{

    printf("My name is Insaane\n");
    printf("I am 21 years old\n");          //If we print it we get output as my name is insaane , i am 21 years old



    //Imagine we have coded thousands of lines, now e want to change the name or age, it will be difficult process doing it, to help us to do our work simpler we use variables
    //Now let me change the name insaane to Hacker and age to 30 using variables
    char myName[] = "Hacker"; // Here i have represented name or any text by char data type or string data type and " []" ...this represents the block of strings here, which points of the whole word "Hacker"
                              //myName is the variable here
    int myAge = 30; // Here i used int to represent the integer data or whole number to specify my age, which is in number
                    ////myAge is the variable here
    printf("My name is %s\n", myName); //Here i used %s to represent the data in string type then i used comma to specify my variable
    printf("I am %d years old", myAge); //Here i used %d to represent the data in integer type then i used comma to specify my variable

    // Now if we build and run this program, we get output as, my name is Hacker, I am 30 years old
    return 0;
}




