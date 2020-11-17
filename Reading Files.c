/*
We can read files in c........the file can be of any type like html,css,c,py........etc
Generally to read into a file, We must open that file
After reading file, we must close that file
In c we can read file using "FILE" command
"FILE".....refers to data type
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    //We can  read lines in our file, we must define a variable to store our reading data and print it out using fgets
    char line[255];

    //Now lets open a file name: myNames.txt ..........we wrote data in it in our last class.....writing files
    //First we need to open file using "fopen()", then we specify the name of the file we need to read and then we use "r" command to read our data
    FILE * fpointer = fopen("employees.txt", "r"); //Here we have used "FILE".to represent File data type
                                             //fpointer is the the file referring to myNames variable
                                             //Then we used fopen(employees.txt)....open that file
                                             //We use "r" to read our file
                                             //* fpointer.........is the memory address of our file

    //Now we can read line by line using fgets()
    fgets(line, 255, fpointer); //Here myData is the char variable assigned that will store each line in our file
                                  //200......represents the size of the array......
                                  //fpointer..........represents the file variable

    //Now we can print the output
    printf("%s", line); //This will read the first line, myData is the char variable assigned.


    fclose(fpointer);
    //When we run the above program we get out as the first line printed, same way we can print the other lines in our file

    return 0;
}
