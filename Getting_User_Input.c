/*
In most of situation we need the user to input and then process the data
we can do this by getting the user information and storing it to a variable
This is done by " scanf " function
Note: To use decimal number in scanf ,we pass " %lf " placeholder
fgets can also used to get input from the user
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    //Lets get the age from the user
    int age; //We are not giving any values, instead we have to store the age value to our age variable
    printf("Enter your age: "); //This will prompt in console to enter age
    scanf("%d", &age); //This will get the age from the user as whole number and store it to age variable
                      //It is important to use " & " .....before the variable
    printf("Your age is %d\n", age); //This will displays the users age


    //Lets get the grade from the user
    char grade; //We are not giving any values, instead we have to store the grade value to our grade variable
    printf("\nEnter your grade: "); //This will prompt in console to enter grade
    scanf("%c", &grade); //This will get the grade from the user as single character and store it to grade variable
                      //It is important to use " & " .....before the variable
    printf("Your grade is %c\n", grade); //This will displays the users grade



    //Lets get name from the user
    char name[20]; //Here we must specify the array size, means the size of the letter, so i entered 20 here
    printf("\nEnter your name: "); //This will prompt in console to enter name
    scanf("%s", name); //This will get the name from the user as string and store it to name variable
    printf("Your name is %s\n", name); //This will displays the users name
    //But here we have the issue, we get only the first instances as output
    //We dont get the instances after the space

    //To fix the above problem we can use fgets instead of scanf
    char myName[20]; //Here we must specify the array size, means the size of the letter, so i entered 20 here
    printf("\nEnter your name: "); //This will prompt in console to enter name
    fgets(myName, 20, stdin); //This will get the name from the user and save it name variable
                           //In fgets we pass the array size and then stdin, which means standard input that we type on the console. In fgets we need to link the variable size
    printf("Your name is %s\n", myName); //This will displays the users name
    //But here we have the issue, we get extra line after printing the output

    return 0;
}
