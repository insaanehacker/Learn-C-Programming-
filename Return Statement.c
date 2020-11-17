/*
We already discussed about "void" function, it return nothing
Return function will return the result or output to the console
Return type function can be represented above the main function
we just specify the data type and variable then we pass the parameter, lastly we call our function inside our main function
When c see the word "return" it automatically breaks out of the function and it does not execute other code after return function
*/

#include <stdio.h>
#include <stdlib.h>

//1. This is first function...........Let us define a return type function, that will multiply the input by 4 times
//2. This is second function..........Here only we are going to paste our prototype
int threeT(int num); //This is the prototype of second function


int fourT(int num)
{
    //We can return our result in two ways

    /*
    int result = num * num * num * num; //This will multiply num by 4 times
    return result; // This will return the result
    */

    //The other way to get result is to directly use the return statement

    return num * num * num * num; // This will directly return the result

    //Now we have to call the function inside our main function
}

int main()
{
    printf("First function answer is :%d\n", fourT(2)); //We used %d, means integer type, and we pass our parameter num as 2 inside fourT function, we should get result as 16
    printf("Second function answer is :%d\n", threeT(3)); //We used %d, means integer type, and we pass our parameter num as 3 inside fourT function, we should get result as 27
    return 0;
}

//We can also use our function below the main function, but we use it directly we get error
//To avoid it we have to define the prototype of the function above the main function
//Now let me use another function

int threeT(int num) //int threeT is the prototype, we must copy and paste it above our main function
{
    return num * num * num; //This will cube the num
}
//After pasting our prototype, we mut call our function inside our main function
