/*
struct is nothing but a function to create a real world data
struct will assign the atributes and objects

syntax:
struct variable{
};
*/

#include <stdio.h>
#include <stdlib.h>

//Now we need to create a struct above the main function
struct school{ //We have created a struct school, now we will specify the attributes in school
    //Now lets create attributes
    char Principal[50];
    char classTeacher[50];
    char Student[50];
    char Subject[50];
    float marks;
};

//New struct

struct mySchool{ //We have created mySchool struct and gave attributes
    char Headmaster[50];
    char classT[50];
    char myStudent[50];
    char mySubject[50];
    double myMarks;
};

int main()
{
    //Now we need to set variable or container to our struct school and assign values to it
    /*
    struct school SchoolData;
    SchoolData.Principal = "Pakianathan";
    SchoolData.classTeacher = "Tom";
    SchoolData.Student = "Jerry";
    SchoolData.Subject = "Maths";
    SchoolData.marks = 60.4;

    printf("%s", SchoolData.Principal);


    //Now when we run the above program we get error, that error with array type
    //We get this error because principal,classTeacher,Student,Subject are in string data type
    //We already know array can able to handle only same data type
    */

    //Therefore, we modify the above program by using string copy function
    //With strcpy().....we are just copying the strings
    struct school SchoolData; //Where SchoolData is the container holding School struct
    strcpy(SchoolData.Principal, "Pakianathan");
    strcpy(SchoolData.classTeacher, "Tom");
    strcpy(SchoolData.Student, "Jerry");
    strcpy(SchoolData.Subject, "Maths");
    SchoolData.marks = 60.4;

    printf("%s", SchoolData.Principal);

    //Now when we try to run our program our program runs fine


    //Now lets create a new struct, that will get input from the user and display the output
    //I created new struct above the main function

    //We need to call struct to enter data
    struct mySchool mySchoolData;
    //We need to get input from the user and store it to our separate variable in struct
    //%s represents string data type
    //We dont need strcpy()....while using scanf
    printf("\nEnter the principal name: ");
    //Now we need to input from user
    scanf("%s", &mySchoolData.Headmaster);

    printf("Enter the Class Teacher name: ");
    //Now we need to input from user
    scanf("%s", &mySchoolData.classT);

    printf("Enter the Student name: ");
    //Now we need to input from user
    scanf("%s", &mySchoolData.myStudent);

    printf("Enter the Subject name: ");
    //Now we need to input from user
    scanf("%s", &mySchoolData.mySubject);

    printf("Enter the marks scored: ");
    //Now we need to input from user
    scanf("%lf", &mySchoolData.myMarks); //%lf represents double datatype in scanf

    printf("\n Headmaster name is: %s", mySchoolData.Headmaster);
    printf("\n Class Teacher name is: %s", mySchoolData.classT);
    printf("\n Student name is: %s", mySchoolData.myStudent);
    printf("\n Subject name is: %s", mySchoolData.mySubject);
    printf("\n You have scored: %f", mySchoolData.myMarks); //%f represents double datatype in printf

    //When we run the program we get perfect output

    return 0;
}
