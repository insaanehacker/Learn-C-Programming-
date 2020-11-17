/*
Now lets build a better calculator that will get the user input and perform arithmetic operations
To do this we need two variables to get input from user as number
Finally we store it to resultant variable
We alse specify what operator we want to use in our calculation
If the user enters wrong operator, we must tell him thats wrong operator
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    //Now lets specify the variable
    int firstNum;
    int secondNum;

    //Now we need to specify the operator, operator can be string, so we use char
    char op;


    //Now we need to prompt the user to enter first number
    printf("Enter the first number: ");
    //Now we need to store our user input to firstNum varaible, so we use scanf
    scanf("%d", &firstNum); //We use %d because we use integer data type, remember to enter &, then only it can store input to our variable

    //Now we need to prompt the user to enter the operator to perform calculation
    printf("Enter the operator: ");
    //Now we need to store our operator input to operator variable, so we use scanf
    scanf(" %c", &op); //We use %c because we are specifying only single character
                      //We should specify space before %c, to make it work correctly, remember to enter &, then only it can store input to our variable


    //Now we need to prompt the user to enter second number
    printf("Enter the first number: ");
    //Now we need to store our user input to secondNum variable, so we use scanf
    scanf("%d", &secondNum); //We use %d because we use integer data type, remember to enter &, then only it can store input to our variable


    //Finally we need to check the operator whether it is in +,-,/,*, so we use if statements
    if (op == '+'){
        printf("The solution is: %d", firstNum + secondNum); //If operator is '+' add firstNum and secondNum
    }
    else if (op == '-'){
        printf("The solution is: %d", firstNum - secondNum); //If operator is '-' subtract numbers
    }
    else if (op == '*'){
        printf("The solution is: %d", firstNum * secondNum); //If operator is '*' multiply firstNum and secondNum
    }
    else if (op == '/'){
        printf("The solution is: %d", firstNum / secondNum); //If operator is '/' divide number
    }
    else{
        printf("Error: Please enter valid operator and try again"); //If the user input is not +,-,*,/ ........It will prompt the user to enter correct variable
    }

    //Now lets run our program and check whether its working or not


    return 0;
}
