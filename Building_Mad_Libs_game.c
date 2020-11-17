/*
Now lets play a small game
You might be noticed in you tube comment section we find comments like:
"Roses are red"
"sky's are blue"
"Title are English"
"Why are'nt you"
Thats sounds funny right....

Now lets a create a same game like that
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    //Here we are getting input from the user
    //We must create a variable and store the input in it

    /*

    char myFlower[20]; //Here i have used "[]" to store the bunch of characters, myFlower is variable here
                    //We did not assign our variable to value, so in order to access it we must pass the size of the array or letter to be stored to our variable, so I used 20
    char myColor[20]; //Here i have used "[]" to store the bunch of characters, myColor is variable here
                    //We did not assign our variable to value, so in order to access it we must pass the size of the array or letter to be stored to our variable, so I used 2
    char myFav[20]; //Here i have used "[]" to store the bunch of characters, myFav is variable here
                  //We did not assign our variable to value, so in order to access it we must pass the size of the array or letter to be stored to our variable, so I used 2

    //Then we need to prompt the user to enter input
    printf("Enter your flower: ");
    //Now we want to get input from user and store it to our variable myFlower
    scanf("%s", myFlower); //%s.... is the placeholder referring to string data type

    printf("Enter your color: ");
     //Now we want to get input from user and store it to our variable myColor
    scanf("%s", myColor); //%s.... is the placeholder referring to string data type

    printf("Enter your Favorite: ");
     //Now we want to get input from user and store it to our variable myFav
    scanf("%s", myFav); //%s.... is the placeholder referring to string data type

    //Now let assign the game
    printf("%s are Red\n", myFlower);
    printf("Sky are %s\n", myColor);
    printf("My favorite is %s\n", myFav);

    //But in above code we have a problem, the second data in user input after the space is ignored
    */

    //To solve it we can use separate first character variable and second character variable


    char myFlower[20]; //Here i have used "[]" to store the bunch of characters, myFlower is variable here
                    //We did not assign our variable to value, so in order to access it we must pass the size of the array or letter to be stored to our variable, so I used 20
    char myColor[20]; //Here i have used "[]" to store the bunch of characters, myColor is variable here
                    //We did not assign our variable to value, so in order to access it we must pass the size of the array or letter to be stored to our variable, so I used 2
    char myFav_1[20]; //Here i have used "[]" to store the bunch of characters, myFav_1 is variable here, points first word in users input
                  //We did not assign our variable to value, so in order to access it we must pass the size of the array or letter to be stored to our variable, so I used 2
    char myFav_2[20]; //Here i have used "[]" to store the bunch of characters, myFav_2 is variable here, points second word in users input
                  //We did not assign our variable to value, so in order to access it we must pass the size of the array or letter to be stored to our variable, so I used 2


    //Then we need to prompt the user to enter input
    printf("Enter your flower: ");
    //Now we want to get input from user and store it to our variable myFlower
    scanf("%s", myFlower); //%s.... is the placeholder referring to string data type

    printf("Enter your color: ");
     //Now we want to get input from user and store it to our variable myColor
    scanf("%s", myColor); //%s.... is the placeholder referring to string data type

    printf("Enter your Favorite: ");
     //Now we want to get input from user and store it to our variable myFav1 and myFav2
    scanf("%s%s", myFav_1, myFav_2); //%s%s.... is the placeholder referring to string data type


    //Now let assign the game
    printf("\n%s are Red\n", myFlower);
    printf("Sky are %s\n", myColor);
    printf("My favorite is %s %s\n", myFav_1, myFav_2);


    return 0;
}
