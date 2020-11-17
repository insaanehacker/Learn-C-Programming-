/*
We can write files in c........the file can be of any type like html,css,c,py........etc
Generally to write into a new file
We must create a new file, then we must write what we want
After writing file, we must close the file we created
In c we can create new file and write the data using "FILE" command
"FILE".....refers to data type
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    //Now lets create a new text file name: myNames.txt
    //First we need to open file using "fopen()", then we specify the name of the file we need to create and then we use "w" command to write our data
    FILE * fmyNames = fopen("myNames.txt", "w"); //Here we have used "FILE".to represent File data type
                                             //fmyNames is the the file referring to myNames variable
                                             //Then we used fopen(myNames.txt)....to create and open that file
                                             //We use "r" to write data to our file
                                             //* fmyNames.........is the memory address of our file
    //Now we must write data to our file
    //So we refer to our fmyNames variable and to write data in our myNames.txt we must use fprintf()....which means file print function
    fprintf(fmyNames, "Name: Insaane, \nAge: 21, \nGpa: 8.6"); //We specify our variable fmyNames then then we write the data that should be written in that file

    //In c we can also append data, means we can add data to the last of the file
    FILE * fmyNewnames = fopen("myNewnames.txt", "a");//Here we have used "FILE".to represent File data type
                                             //fmyNewnames is the the file referring to myNames variable
                                             //Then we used fopen(myNewnames.txt)....to open that file
                                             //We use "a" to add data to our file
                                             //* fmyNames.........is the memory address of our file
    fprintf(fmyNewnames, "\nResult: 'pass'"); //We specify our variable fmyNames then then we add the data that should be added in our file


    //Finally we need to close the file
    fclose(fmyNewnames); //This will close the file after writing the data

    FILE * fpointer = fopen("employees.txt", "w");
    fprintf(fpointer, "Jim: Sales \nKelly: Customer service \nInsaane: Pentester");
    fclose(fpointer);
    //Now when we run the program, a new file myNames.txt will be created and the data will be be written as we specified above
    return 0;
}
