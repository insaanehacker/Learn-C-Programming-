//In certain situation we need to loop through our data
//This can be done in two ways, one is by using while loops and other is by using for loops
//For loops iterate our data and print output
/*
syntax:
for(condition){       we can specify many condition followed by ";"
    do something
}

*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    //Example with while loop
    //This program will print number 1 to 5, But we used lot of lines of code, this can be done simple using while loop
    /*
    int num = 1;
    while (num <= 5){
        printf("%d\n", num);
        num++;
    }
    */

    //The above code can be made simple with for loop
    int i; //"i" is the variable assigned in integer data type
    //Now let us use for loop and specify our condition
    for (i=1; i<=6; i++){ //Here we have set the value of i is 1, then we have specified condition that i<=6, then we increment i to check next number
        printf("%d\n", i); //Print the value of i
    }
    //When we run the above program, we get output as 1,2,3,4,5,6

    //For loop is very important when we use it in array to iterate the values
    //Now lets create a array and test it
    //int Number[] = [56, 54, 74, 84];
    //The item in the array is processed by index number, in c the index starts from 0
    int luckyNumbers[] = {56, 54, 74, 84}; //To specify array, we used, {}
      //index.........0...1....2...3

    //We can access the element by calling the variable with its index number
    //Number[0]; //Means in number variable, index 0 is 56
    //Now lets create for loop that will print the index....0 to 2
    int num; //We specify a integer variable i
    for(num = 0; num < 3; num++){ //Here 0 indicates the index 0, We set condition, i is less than index3, next we need to increment the i and check the condition
        printf("%d\n", luckyNumbers[num]); //This will print the index 0 to index 2 in number variable
                               //To do this we must specify the index, number[num], means the index with specified condition
    }
    return 0;
}
