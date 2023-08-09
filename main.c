#define _CTR_SECURE_NO_WARNINGS  //suppress security warnings 
#include "converting.h"   //header file for the "converting" module
#include "manipulating.h" // Header file for the "manipulation" module
#include "fundamentals.h" // Header file for the "fundamentals" module
#include "tokenizing.h"   // Header file for the "tokenizing" module

// Main function
int main() {

    // Define a character array to store user input
    char buff[10];

    // Loop to keep the program running 
    do {
        // Print the menu options

        printf("1 - Fundamentals\n");

        printf("2 - Manipulation\n");

        printf("3 - Converting\n");

        printf("4 - Tokenizing\n");

        printf("0 - Exit\n");         // option for exit

        printf("Which module to run? \n");


        fgets(buff, 10, stdin);
        switch (buff[0])

        {
        case '1': fundamentals(); //when user input is '1'
            break;
        case '2': manipulating();//when user input is '2'
            break;
        case '3': converting();//when user input is '3'
            break;
        case '4': tokenizing();//when user input is '4'
            break;
        }

    } while (buff[0] != '0');
    return 0;
}






