//c can deal with number very well
//In lot of times we use numbers in c to do our task
//All types of number can be used here
//%d ...........represents integer or whole number data type
//%f ...........represents decimal number or double or float data type

#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("%d\n", 7); // This will print number 7 because we used %d which is integer data type
    printf("%f\n", 7.0); // This will print number 7.0000 because we used %f which is float or double data type

    //We can also add two decimal number
    printf("%f\n", 7.3 + 8.9); //Here we used %f which means represent decimal number
                            //Here we add two decimal numbers and output will be displayed

    //We can also add decimal number with integer
    printf("%f\n", 7 + 8.9); //Here we used %f which means represent decimal number
                            //Here we add integer number and decimal number, then the result will be converted to decimal number and then output will be displayed

    /*
    printf("%d", 7.3 + 8.9) //Here we used %d which means represent integer number
                            //Here we add two decimal numbers and output will be displayed
                            //Here we get error because, the input is decimal type and the data specified is integer
    */

    //Now lets add,subtract, multiply and divide
    printf("%f\n", 7.9+8); //Here we used %d which means represent integer number
                            //Here we add two integer numbers and output will be displayed
    printf("%d\n", 9*3);  //Here we used %d which means represent integer number
                        //Here we multiply two integer numbers and output will be displayed

    printf("%d\n", 7-2); //Here we used %d which means represent integer number
                      //Here we subtract numbers and output will be displayed
    printf("%d\n", 20/2); //Here we used %d which means represent integer number
                      //Here we divide numbers and output will be displayed

    //we can use certain functions in numbers
    printf("%f\n", pow(2, 3)); //pow() will power, 2^3 is 8
    printf("%f\n", sqrt(36)); //sqrt() will find the square root of the number
    printf("%f\n", ceil(36.45)); //ceil() will round of the decimal number
    printf("%f\n", floor(36.67)); //floor() will not round the number


    return 0;
}
