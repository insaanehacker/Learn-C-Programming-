/* Constants are nothing but, once assigned it cant be modified or changed
constants can be of any type
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num = 30;
    printf("%d\n", num);     //This can be changed or modified, here we changed the num 30 to 50
    num = 50;
    printf("%d\n", num);

    /*
    //Now let us assign a integer constant
    const int number = 60; //We use const keyword to display constant
    printf("%d\n", number);
    number = 7;                        //Here we will get error, because we used constant integer and it cannot be modified or changed
    printf("%d\n", number);
    */

    printf("%d\n", 21);             //These are also constants, because it cant be modified or changed unless we manually change them
    printf("%s\n", "DATA");


    return 0;
}
