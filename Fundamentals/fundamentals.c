/*Christian Ziyu Ukiike
Student id: 1339915219
Seneca mail: czukiike-santos-delp@myseneca.ca
CPR101 LEC NDD
*/
#include "fundamentals.h"// inclusion of the header so the program can run, without it it will not compile since the program cannot call for declarations and libraries.

void fundamentals() 
{
    /* Version 1 */

    printf(" Start of Indexing Strings Demo \n");
    char buffer1[80]; // a size array of '80' is declared to store user input
    char num_input[10]; // it will store the value of the postion that the user want to find with an index value of 10
    int position; // the location of the index number of buffer1 will be stored in this variable which will print the location
    while (TRUE) // Iteration "while" starts and will keep looping until the program exits via break;
    {
        printf("Type a string (q - to quit):\n");
        gets(buffer1);  // to input the value of cstring 'buffer1'
        if (strcmp(buffer1, "q") == 0) break;  // if the input value is equal to 'q' the program will break; and thereby terminate
        while (TRUE)
        {
            printf("Type the character position within the string:\n");
            gets(num_input); // the value that the user entered is stored in number_input as a character
            position = atoi(num_input); // the value that was stored in num_input from the user enter valued is stored in a new variable named "position" to convert the value char to an interger. 
            if (position >= strlen(buffer1))  // it is determined by this condition if the position is wrongnor not.
            {
                printf("Wrong position... type again, please\n"); // if it is found to be wrong, user is prompted to input again.
                continue;
            }
            printf("The character found at %d position is '%c'\n", position, buffer1[position]);
            break; // the loop is exited after the program displays the postion of the entered string from the user and the character found in that location.
        }

    }
    printf(" End of Indexing Strings Demo \n\n");
}