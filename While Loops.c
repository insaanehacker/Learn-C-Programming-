/*
In lot of situations we use while loops
We use while loop to check our condition is true, then run the loop until the condition is false
When the condition is false, get out of the loop

syntax:
while (condition){
    execute code when condition is true
}
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    //Lets us consider a example that will print 1 to 5


    //To do this we need to specify the variable and set it equal to 1
    int number = 1;
    //Now we need to pass the condition that we want to execute
    while (number <= 5){ //Check whether the number is less or equal to 5, if yes print that number
        printf("%d\n", number);
        //Now it will print the number, if we run the code, the number 1 will be printed in loop that is again and again, this is called infinite loop
        //This happens because we did not specify the loop where to stop, so it will take the number as 1 and loop it again and again
        //Therefore we use increment operator, this will add number by 1 and checks the condition is true or not in while loop
        //If the condition is true, it will print the current number and loop the data
        //We can do the increment operator by two ways here: number = number + 1 ....this will add number by 1
        //or
        number++; //Process is very simple, c checks, while condition number = 1, which is less than or equal to 5, so prints 1 first
                  //Then c checks, while condition number = 2, which is less than or equal to 5, so prints 2 second
                  //Then c checks, while condition number = 3, which is less than or equal to 5, so prints 3 third
                  //Then c checks, while condition number = 4, which is less than or equal to 5, so prints 4 fourth
                  //Then c checks, while condition number = 5, which is less than or equal to 5, so prints 5 fifth
                  //Then c checks, while condition number = 6, which is not less than or equal to 5, so it breaks out or exit out of the loop

        //First c will see while condition and then only it process data

        //In addition to while loop we have do while loop also
        //In certain situation we need to to output the data first, in such situation we use do while loop
        //We can do a task and process the while loop
        /*syntax:
        do{
            //certain condition
        }
        while (condition);
        */
        int num = 6;
        do{
            printf("%d\n", num);
        }
        while(num <= 5);

        //When we run this program, we will get output as 6, because we specified do condition to print 6, then only it goes over to while loop condition
    }
    return 0;
}
