/*
Here we are going to see two main topics
One is 2D Array and other is Nested loop
Two dimensional array is nothing but, a array in side a array
Nested loop is nothing but, a for loop inside a for loop
Syntax: 2D array
datatype nums or anything[][] = { //nums is variable
                            {}
                            {}
                            {}
                           }
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    //Now lets create a 2d array with integer data type
    /*
    int myNums[][] = {          //"[][]".......is the representation of 2d array
                      {1,2},  .......row1
                      {3,4},  .......row1
                      {5,6}   .......row3
                ......c1.c2..........column1, column2
                     };
    */

    //Here first [].......represents row
    //second [].......represents column

    //To access elements inside the 2d array we must pass the index number
    //"[][]".......is the representation of 2d array
    //In first [3].....it represents rows.....we need to mention the number of width or row, here there are 3 rows
    //In second [2].....it represents rows.....we need to mention the number of height or column, here there are 2 column, which means elements in each row

    int myNums[3][2] = {
                      {1, 2},
                      {3, 4},
                      {5, 6}
                       };
    printf("%d\n", myNums[0][0]); //We pass index number of rows and column, to access particular element
                                //Here we have given [0][0]....which means 0th row and 0th column only we have element 1
    //Now lets access element 4, it of the order 1st row and 1st column
    printf("%d\n", myNums[1][1]);

    printf("\n");

    //Next main important concept is nested for loop
    //Nested for loop is nothing but, a for loop inside a for loop
    /*syntax:
    for(first condition){
        for(second condition){
            do something
        }
    }
    */
    //Now lets define a integer variable using 2d array
    int myNumber[3][2] = {
                      {1, 2},
                      {3, 4},
                      {5, 6}
                       };

    //lets use for loop to iterate our element
    //Here we have two array, lets define first array as "i" and second array as "j"
    //Next we need to represent our "i" and "j" variable
    int i, j;
    //lets use for loop to iterate our element
    for(i=0; i<3; i++){ //Here we assume lets i=0 initially and i<3.....represents the number of rows(horizontal) and i++ increases the value by one
                        //i<3......this particular for loop is executed three times, this is defined by our 2d array in row or width
        for(j=0; j<2; j++){ //Here we assume lets j=0 initially and j<2.....represents the number of columns(vertical) and j++ increases the value by one
                            //Every time when we loop through the above for loop......j<2......this is defined by our 2d array in column or height
            printf("%d, ", myNumber[i][j]); //[i][j]......represents, in each i'th row j'th column, iterate the values
            //Before we printed manually [0][0]......so on....but the above for loop executes automatically
        }
    }

    return 0;
}























