/*
Now lets build a basic calculator that adds two number
To do this we need two numbers
Then we do our operation
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    //Lets get the number from user
    //Then we need to store it to a variable
    int number1;
    int number2;
    printf("Enter the first number: "); //This will prompt to enter first number
    scanf("%d", &number1); //Here we used %d to get number in integer type, then we specify number1 to store the first number to number1 variable
    printf("Enter the second number: "); //This will prompt to enter second number
    scanf("%d", &number2); //Here we used %d to get number in integer type, then we specify number2 to store the first number to number2 variable
    //Now we need to add both numbers
    printf("The solution is: %d\n", number1 + number2); //This will add number 1 and number 2 and prints the output to the console
                                                      // %d represents integer data type or whole number

    //Above we can only use whole numbers, if we use decimal number, it throws us error
    //To fix this we can use double data type
    double number_1;
    double number_2;
    printf("Enter the first number: "); //This will prompt to enter first number
    scanf("%lf", &number_1); //Here we used %lf to get number in integer type, then we specify number1 to store the first number to number1 variable
    printf("Enter the second number: "); //This will prompt to enter second number
    scanf("%lf", &number_2); //Here we used %lf to get number in integer type, then we specify number2 to store the first number to number2 variable
    //Now we need to add both numbers
    printf("The solution is: %f", number_1 + number_2); //This will add number 1 and number 2 and prints the output to the console
                                                      // %f represents double or float data type or decimal number
    return 0;
}
