/*
Array is an collection of elements which can hold bunch of values or data
Imagine you have a situation you need to feed many elements and have to access them
It will be very difficult to create a variable to each and set value to it
To make our job more simple, we use Array
Array can able to any number of data
When we pass a number in array, it denotes the potential to hold that much of items, example...myArray[10]..means it can hold 10 items
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{

    //Now lets create a integer array
    int myNumber[] = {6, 7, 4, 3, 9, 1, 5}; //Here we have created a variable myNumber and "[]"...this specifies the c that we need bunch of data, Then we set the variable to bunch of data by using "{}"
    //Index...........0..1..2..3..4..5..6       //These are the index number in array, starts from 0
    printf("%d\n", myNumber[3]); //We can access a particular item in the array by using the index number
                    //Here we are give index number 3, which points out "4" in the array, so we get result as 4



    //We can also modify the values or change the data in the array
    //Lets change the 7 to 250 in the array
    //To do this specify the variable and index number and set it equal to 250
    int myNumbr[] = {6, 7, 4, 3, 9, 1, 5};
    myNumbr[1] = 250; //Here [1] points outs first index that is 7
    printf("%d\n", myNumbr[1]); //We can access a particular item in the array by using the index number
                    //Here we are give index number 1, which points out "7" in the array, we set it equal to 250

    //Similarly we can use char, float, double.........
    // char example:
    char myWord[] = "Insaane";  //This also points out array
    printf("%s\n", myWord);
    return 0;
}
