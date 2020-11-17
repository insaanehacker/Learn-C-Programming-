//Now lets make a simple guessing game, that will guess computer guess, if the guess is correct, it should tell us , we won. or else we loose

#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*
    //Now let me create variable for our guessing game
    int computerGuess = 5;
    int usersGuess;


    //Now we need to check whether usersGuess and computer Guess matches
    //To do this we use while loop
    while (computerGuess != usersGuess){
        //Now we must prompt user to enter guess
        printf("Enter your guess: ");
        //Now we must store users input to our usersGuess variable
        scanf("%d", &usersGuess);
    }
    //If the users guess is equal to computer guess, it gets exit out of the loop
    printf("You win");
    */

    //Now lets create the game more interesting, will add count,limit, and finally out of guesses
    //Now let me create variable for our guessing game
    int computerGuess = 5;
    int usersGuess;
    int countGuess = 0;
    int limit = 3;
    int outofGuess = 0; //No guess left


    //Now we need to check whether usersGuess and computer Guess matches
    //To do this we use while loop
    //We also need to check if the usersGuess is not equal to computerGuess we need to increase the countGuess by 1
    //If the user is reached 3 guesses, we must tell him you are out of guesses
    while (computerGuess != usersGuess && outofGuess == 0){ //out of guesses is 0, they are not out of guess and still they can guess
        if (countGuess < limit){
            //Now we must prompt user to enter guess
            printf("Enter your guess: ");
            //Now we must store users input to our usersGuess variable
            scanf("%d", &usersGuess);
            countGuess++;
        }
        else{
            outofGuess = 1; //run out of guesses

        }
    }
    //If the users guess is equal to computer guess, it gets exit out of the loop
    if (outofGuess == 1){
        printf("You loose the game, out of guesses");
    }
    else{
    printf("You win the game");
    }

    return 0;
}
