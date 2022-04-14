#include "converting.h" // header file is included for accessing all functions and macros

void converting() // function is defined here which will be called in int main()
{
	printf("*** Start of Converting Strings to int Demo ***\n");
	char int_string[80]; // a numeric string is declared with maximum length of 80 characters
	int int_number; // an int variable is declared for storing user input
	while (TRUE) // code inside this while construct will loop continuously untl the it breaks;
	{
		printf("Type the int numeric string (q - to quit):\n");
		gets(int_string); // gets will input the cstring 'int_string'
		if (strcmp(int_string, "q") == 0) // strcmp is used here to compare the value of 'int_string' with "q"
			break; // program will exit if the code enters this selection construct (when user inputs "q")
		int_number = atoi(int_string); // atoi function here converts the cstring "int_string" to an integer which is stored in "int_number"
		printf("Converted number is %d\n", int_number); // the final output is displayed to the user (converted int value)
	}
	printf("*** End of Converting strings to int Demo ***\n\n");
}