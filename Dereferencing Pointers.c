/*
We already learn't that a pointers is something referring to the physical memory address of our variable
Dereferencing pointers......we access that particular memory location and dereference our memory address defined to our data stored
syntax:
int variable;
datatype *pVariable(Variable defined already) = &variable(defined variable);
printf("%d", *&variable); We used "*"......before variable, this will dereference our physical memory address to our variable value assigned
while we dereference pointer, we use the placeholder as same datatype defined previously, for example: if integer data type is defined already, we use %d place holder
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num = 5;
    int *pNum = &num;
    printf("Original memory address: %p\n", &num); //&num refers to our pointer: num variable memory address, This will print the memory address of our num variable
    printf("Dereferenced memory address: %d\n", *&num); //Here &num will refer to our num variable and *&num refers that we are dereferencing, means we access original memory address of our variable and set it to new data which is equal to our data value
                                                     //This will dereference our memory location to our num variable "5"....so here "5" will be printed
    printf("Referenced memory address: %d\n", &*&num); //&*&num refers to our pointer: num variable memory address, This will print the memory address of our num variable
    return 0;
}
