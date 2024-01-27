#define _CRT_SECURE_NO_WARNINGS												//Included to overcome the scanf warnings in the code
#define BUFFER_SIZE 80													//A array "buffer" which can store upto 79 characters, and 1 extra space for the null character at the end.
#define NUM_INPUT_SIZE 10												//Another character type array "NUM_INPUT_SIZE" which can hold upto 9 characters, and 1 more extra space to hold the null character at the end of the string.
#include "fundamentals.h"															//Including the Header file

void fundamentals(void){														//Defining the function "fundamentals", which deals with the indexing part of the project.

		// V1
		printf("*** Start of Indexing Strings Demo ***\n");
		char buffer1[BUFFER_SIZE];
		char numInput[NUM_INPUT_SIZE];
		size_t position;													//Creating an int unsigned type of variable "position", unsigned refers to an integer which can never be a negative value.
		do {
			printf("Type not empty string (q - to quit):\n");
			fgets(buffer1, BUFFER_SIZE, stdin);								//Gets the input from the user and store it into the array "buffer1".
			buffer1[strlen(buffer1) - 1] = '\0';
			if (strcmp(buffer1, "q") != 0) {
				printf("Type the character position within the string:\n");
				fgets(numInput, NUM_INPUT_SIZE, stdin);						//Gets the input from the user and stores it in the array "NUM_INPUT_SIZE".
				numInput[strlen(numInput) - 1] = '\0';
				position = atoi(numInput);									//Position is assigned to the integer value of num_input using atoi function, the atoi function here converts the character type into the integer type.
				if (position >= strlen(buffer1)) {							//An if condition is defined, where it enters the condition if position's value is greater than or equal to the length of buffer1 string.
					position = strlen(buffer1) - 1;							//Position is assigned as length of buffer1 string subtracted by 1.
					printf("Too big... Position reduced to max. available\n");
					printf("Too big... Position reduced to max. availbale\n");

				}
				printf("The character found at %d position is \'%c\'\n",		//Printing the position and value of buffer1 at the defined position.
					(int)position, buffer1[position]);						//Gets the input from the user again and store it into the array "buffer1", as if the condition is true, it will prompt for the input again.
			}
			}
		} while (strcmp(buffer1, "q") != 0); 								//A do while loop which will be executed unless and until "bufferl" value is equal to "q", and if q is entered the program will end.						
		printf("*** End of Indexing Strings Demo ***\n\n");

	}
	/* Version 2 */
	



		/* Version 3 */
		


