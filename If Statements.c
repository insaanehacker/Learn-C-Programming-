/*
We can use if statement to check our condition or statement is true or not
We also use else statement to to other thing when the statement or condition does not satisfy
Here we are also going to deal with operators and compare them to see our result
> ........greater than
> ........less than
>= .......greater than equal to
<= .......less than equal to
!= .......not equal to
*/

#include <stdio.h>
#include <stdlib.h>

//Now let me define a function that will check the number is greater or not, and print out the greater number using if else statements
/*
syntax:
if (condition){           //Condition true
    //Do something
}
else{                     //Condition false
}
*/

//First function: Printing greatest number between two numbers

int greaterNumber(int num1, int num2)
{
    //Now we need to compare num1 and num2 and print out greatest number
    if (num1 > num2){ //If num1 is gretaer than num2, print num1
        return num1;
    }
    else{            //else print num2
        return num2;
    }
}
//Now we need to call our function and specify parameters to it


//Second function: Printing greatest number between three numbers
//Here we will use comparison operator to to this task
//We have, operators like: "and" , "or" "Negation"
//"and" is represented by && ...............both the condition must be true, then only the output will be true
//"or" is represented by || ...............If any one of the condition is true, the output will be true
//"negation" is represented by ! ...........When the condition is true, it converts to false, when the condition is false it converts to  true


int greatestNumber(int num1, int num2, int num3)
{
    //Now we need to compare num1 and num2 and num3, then print out greatest number
    if (num1 > num2 && num1 > num3){ //num1 is greater than num2 and num3, print num1
        return num1;
    }
    else if(num2 > num1 && num2 > num3){ //num2 is greater than num1 and num3, print num2
        return num2;
    }
    else{              //else print num2
        return num3;
    }
}
//Now we need to call our function and specify parameters to it

//Third function: Printing greatest number between three numbers
//Here we will use comparison operator to to this task
//We have, operators like: "and" , "or" "Negation"
//"and" is represented by && ...............both the condition must be true, then only the output will be true
//"or" is represented by || ...............If any one of the condition is true, the output will be true
//"negation" is represented by ! ...........When the condition is true, it converts to false, when the condition is false it converts to  true


int greatest_Number(int num1, int num2)
{
    //Now lets compare num1 and num2, if num1 greater than num 2 or if num2 equal to num1, print True or else print false
    if (num1 > num2 || num2 == num1){ //num1 is greater than num2 and num3, print num1
        return "True";
    }
    else{              //else print False
        return "False";
    }
}
//Now we need to call our function and specify parameters to it

//Fourth function: negotiation
int greatest__Number(int num1, int num2)
{
    //Now lets compare num1 and num2, if num1 greater than num 2 or if num2 equal to num1, print True or else print false
    if (!(num1 > num2 || num2 == num1)){ //num1 is greater than num2 and num3, print num1, actual result is true, but we used "!" so the result is negotiated and converted to false
        return "True";
    }
    else{              //else print False
        return "False";
    }
}
//Now we need to call our function and specify parameters to it



int main()
{
    printf("First function answer is: %d\n", greaterNumber(20, 10)); // We must get output as 20, because the if statements fails and else statement gets executed
                                                                    //greaterNumber(10,20)....this is the call function and 10, 20 is parameter

    printf("Second function answer is: %d\n", greatestNumber(10, 30, 5)); // We must get output as 30, because the if statements fails and else if statement gets executed
                                                                    //greatestNumber(10,30,5)....this is the call function and 10, 30, 5 is parameter

    printf("Third function answer is: %s\n", greatest_Number(20, 5)); // We must get output as True, because the if statements satisfies here
                                                                    //greatest_Number(20, 5)....this is the call function and 20, 5 is parameter
                                                                    //output is true because one of the condition satisfies

    printf("Fourth function answer is: %s\n", greatest__Number(20, 5)); //greatest_Number(20, 5)....this is the call function and 20, 5 is parameter
                                                                       //actual result is true, but we used "!" so the result is negotiated and converted to false
    return 0;
}
