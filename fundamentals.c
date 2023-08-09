// FUNDAMENTALS MODULE SOURCE
#define _CRT_SECURE_NO_WARNINGS
#define BUFFER_SIZE     80  //Macros defined (which are globally accepted and can be used anywhere in the whole program or the code)
#define NUM_INPUT_SIZE  10
#include "fundamentals.h" // including the header file helps linking the library functions to the main file

void fundamentals(void) { // calling the function named fundamentals
	/* Version 1 */
	printf("*** Start of Indexing Strings Demo ***\n"); //printing the starting line of the code
	char    buffer1[BUFFER_SIZE];  // declaring all the variables which will be used in the program below wwith their datatypes
	char    numInput[NUM_INPUT_SIZE];
	size_t  position; //size_t the type of variable used to calculate the size of variable named position in bytes.

	// using a do-while to make a loop until the spefied conditiom is not fulfiled.
	do {
		printf("Type not empty string (q - to quit):\n");

		//putting fgets helps reading the line and storing it into a string names buffer1.
		fgets(buffer1, BUFFER_SIZE, stdin);

		//1 is being subtracted from the BUFFER_SIZE(80) as the last index of a string is always assigned to the NULL terminator
		buffer1[strlen(buffer1) - 1] = '\0';

		//comparision between buffer1 and 'q', where a conditipn is
		//applied that the string won't exceed the string limit, if the condition won't be fulfiled, the below statement will be printed. 
		if (strcmp(buffer1, "q") != 0) {
			printf("Type the character position within the string:\n");

			//fgets help store the line stored in numInput and converting it into a string.
			fgets(numInput, NUM_INPUT_SIZE, stdin);
			numInput[strlen(numInput) - 1] = '\0';

			//assigning the value of numInput to the position, by converting a string to the digits or the numerical value.
			position = atoi(numInput);

			//if the digit or the character exceed the buffer size then, will implement the below print statement.
			if (position >= strlen(buffer1)) {

				//if size exceeds, then the last character stored in buffer1 will be removed automatically, 
				//to bring the string in the specific range. 
				position = strlen(buffer1) - 1;
				printf("Too big... Position reduced to max. available\n");
			}
			printf("The character found at %d position is \'%c\'\n",
				(int)position, buffer1[position]);
		}
	} while (strcmp(buffer1, "q") != 0); //the loop will continue until this condition won't be fulfiled
	printf("*** End of Indexing Strings Demo ***\n\n"); //Once the loop ends, the line will get printed.
}
