// CONVERTING MODULE SOURCE

#define _CRT_SECURE_NO_WARNINGS //suppress security warnings 
#define BUFFER_SIZE 80          //defining the size of the character buffer

#include "converting.h"        //header file for the "converting" module


// V1 - Implementation of the converting function
void converting(void) {
	printf("*** Start of Converting Strings to int Demo ***\n");

	char	intString[BUFFER_SIZE];  // A character array to store the input string
	int		intNumber;             // Variable to store the converted integer

	do {
		printf("Type an int numeric string (q - to quit) :\n");
		fgets(intString, BUFFER_SIZE, stdin);  // Read the user input (numeric string)

		intString[strlen(intString) - 1] = '\0'; // Remove the trailing newline character from the input

		if (strcmp(intString, "q") != 0)
		{
			intNumber = atoi(intString);   // Convert the string to an integer 
			printf("Converting number is %d\n", intNumber);  // Display the converted integer
		}
	} while (strcmp(intString, "q") != 0);  // Continue the loop until the user enters 'q' to quit

	printf("*** End of Converting Strings to int Demo ***\n\n");
}
