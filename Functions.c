#include <stdio.h>
#include <stdlib.h>

int main()
{
    myName();
    _Name_("Insaane");
    myData("Hacker", 32);

    return 0;
}

//Imagine you have coded 100's of line and you want them to use it again in our program
//It is difficult to copy paste each time
//To make our work simpler we use function
//Function executes a collection of code to do a specific task
//In order to define a function in c, we use keyword "void", which means return nothing
//Then we specify a variable or name to that function followed by "()" and then "{}"
//simple example: void myName(){}
//When u print that function it return none, so in order to access that function we must call that function
// example: myName() ........this will call the function

void myName()
{
    printf("%s\n", "Hello World"); //%s represent string data type
}
//Now lets call our function
//Now we called our function in our main code

//Now lets create a another function and use variable to print names
//To do this we must specify parameter, which is inside "()"
void _Name_(char my_name[]) //char is string my_name[] is variable and []...to get bunch of data
{
    printf("Hello %s\n", my_name);
}
//Now let call our function and give parameter Insaane, so it should print Hello Insaane


//Now let create another function that will print name and age
void myData(char name[20], int age)
{
    printf("My name is %s and i am %d years old", name, age);
}
//Now lets call our function in main function with name and age
