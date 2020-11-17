/*
switch statements is similar to if statements
In if statements we use if condition to check whether our condition is true, and we use else when the condition is not true
We do the same in switch statements, we can able to check our condition is true or not
In switch statements we use "case" condition to check the statement is true
Then we use default to specify the default condition or to specify error
When the condition satisfies, the program should execute result and stop running, so we use break
*/

#include <stdio.h>
#include <stdlib.h>


/*
syntax:
switch(variable){
case 1:
    condition
break;
case 2:
    condition
break;
default:
    condition
}
*/


//Now let us define letters and print the specified letters to a phrase

int main()
{
//Example 1:
    //Now we must create a variable
    char letter = 'A'; //Single string character

    //Now lets use switch statements to check the letter is "A", if yes, it should print "I love Apple"

    switch(letter)
    {
    case 'A': //Here we have specified case A, this will check whether the letter is equal to A, case is the condition that is equal to variable used to compare our data
        printf("I Love Apple");
        break;
    case 'B': //Here we have specified case B, this will check whether the letter is equal to B, case is the condition that is equal to variable used to compare our data
        printf("I Love Banana");
        break;
    }
    //When we run we get output as "I Love Apple because, the input letter is A

//Example 2:
    //Now lets create result using users grade as input, then will compare the grade with switch statements to display results
    //First we need to create variable t store users input
    char myGrade;

    //Now we need to prompt the user to enter grade
    printf("\nEnter the grade you have scored: ");
    //Then we need to store our variable using scanf
    scanf("%c", &myGrade);

    //Now we need to specify grades to check using switch statements
    switch(myGrade)
    {
    case 'S':
        printf("You have scored extraordinary marks!"); //If the student grade is "S"
        break;
    case 'A':
        printf("You have scored very good marks!"); //If the student grade is "A"
        break;
    case 'B':
        printf("You have scored good marks!"); //If the student grade is "B"
        break;
    case 'C':
        printf("You have scored avearge marks!"); //If the student grade is "C"
        break;
    case 'D':
        printf("Your marks is below average!"); //If the student grade is "D"
        break;
    case 'E':
        printf("Your marks is very poor!"); //If the student grade is "F"
        break;
    //When user enter the grade other than S,A,B,C,D,E......they should get an error
    //To do this we use default command
    default:
        printf("Error: Invalid Grade");

    }

    //Now when we run our program,it will ask input from the user and checks whether the condition satisfies in switch statements and display results to console

    return 0;
}
