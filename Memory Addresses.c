/*
Till now we have learn't so many things
we have learn't about variables, that is used to store our data
Have you ever wondered that, how the c stores our variables?
Actually, that's a right question, "c" does not store our variables or data directly
Every computer has RAM(Random Access Memory)....which is responsible for storing and retrieving things we need
The location which Ram stores our data are called memory location
Every time we define variable or data, "c" stores our data in to a particular memory location
When we need our output, we humans, simply refer the variables or data
Now the "c" searches for the memory location of that particular variable or data, then only it displays our output
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    //Now lets define variables and print them
    char name[20] = "Insaane";
    int age = 22;
    //Now lets print our output
    printf("I am %s and I am %d years old ",name, age);
    printf("\n");

    //In above code, we defined a char variable-name and integer variable-age, but when we printing our output we referred only our variable, and c printed output for us
    //We don't know, what happened back end, "c" searched for the memory location of our variables defined and then it printed the values set to that memory location
    //To make it simple and clear now lets print the memory location of our variables
    //This can be done by a special placeholder: "%p"....This refers to the pointer
    printf("Memory location of name: %p", &name); //This will print the memory location of name, we use "&"..before our variable to refer our variable
    printf("\nMemory location of age: %p", &age); //This will print the memory location of age, we use "&"..before our variable to refer our variable

    //When we run the above code, we get out put as:
                      //Memory location of name: 000000000061FE00    ..........this the memory location of name
                     //Memory location of age: 000000000061FDFC      ..........this the memory location of age
    return 0;
}
