#define _CRT_SECURE_NO_WARNINGS
#define BUFFER_SIZE 300

#include "tokenizing.h"


	/* Version 1 */

void tokenizing() {
    /* Version 1 */
    // This function demonstrates tokenizing words entered by the user.

    printf("*** Start of Tokenizing Words Demo ***\n");

    char words[BUFFER_SIZE]; // Buffer to store the user's input words
    char* nextWord = NULL; // Pointer to keep track of the next token
    int wordsCounter; // Counter to track the word number

    do {
        printf("Type a few words separated by space (q - to quit):\n");
        fgets(words, BUFFER_SIZE, stdin); // Read the user's input from standard input (keyboard)
        words[strlen(words) - 1] = '\0'; // Remove the trailing newline from the input

        if (strcmp(words, "q") != 0) {
            // Tokenize the input words using strtok() function
            nextWord = strtok(words, " "); // Delimiter is set to space

            wordsCounter = 1;
            while (nextWord) {
                // Print each word with its corresponding number
                printf("Word #%d is '%s'\n", wordsCounter++, nextWord);
                nextWord = strtok(NULL, " "); // Continue tokenizing using NULL as the first argument
            }
        }
    } while (strcmp(words, "q") != 0); // Continue until the user enters 'q' to quit the program

    printf("*** End of Tokenizing Words Demo***\n\n");
}



	/* Version 2 */


		/* Version 3 */


