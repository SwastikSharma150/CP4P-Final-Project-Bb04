/*
Name: Swastik Sharma
Student Id: 122165210
Seneca mail: ssharma468@myseneca.ca
CPR 101 LEC NDD 
*/

#include "converting.h" // header file is included for accessing function prototype and macros

void converting() // function is defined here to be called in int main()
{
	/* Version 1 */
	printf("*** Start of Converting Strings to int Demo ***\n");
	char int_string[80]; // a numeric string is declared for storing user input
	int int_number; // int variable declared for storing converted string
	while (TRUE) // infinite loop begins
	{
		printf("Type the int numeric string (q - to quit):\n");
		gets(int_string); // input and store the cstring 'int_string'
		if (strcmp(int_string, "q") == 0) // input value is compared with q in case the user wants to quit
			break; // if the input value is q, program will exit the while loop
		int_number = atoi(int_string); // atoi function used here for converting the cstring to an integer
		printf("Converted number is %d\n", int_number); // the converted integer value is displayed to the user 
	}
	printf("*** End of Converting strings to int Demo ***\n\n");

	/* Version 2 */
	printf("*** Start of Converting Strings to double Demo ***\n");
	char double_string[80]; // a numeric string is declared for storing user input
	double double_number; // floating variable declared for storing the converted string
	while (TRUE) // infinite loop begins
	{
		printf("Type the double numeric string (q � to quit):\n");
		gets(double_string); // gets will input the cstring 'double_string'
		if (strcmp(double_string, "q") == 0) // input value is compared with q in case the user wants to quit
			break; // if the input value is q, program will exit the while loop
		double_number = atof(double_string); // atof function used here for converting the cstring to a float value
		printf("Converted number is %f\n", double_number); // the converted float value is displayed to the user 
	}
	printf("*** End of Converting Strings to double Demo ***\n\n");
}