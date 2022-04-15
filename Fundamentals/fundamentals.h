/*Christian Ziyu Ukiike
Student id: 1339915219
Seneca mail: czukiike-santos-delp@myseneca.ca
CPR101 LEC NDD
*/
#ifndef _FUNDAMENTALS_H // checks whether _FUNDAMENTALS_H is declared or not.
#define _FUNDAMENTALS_H // if FUNDAMENTALS_H is not declared it will declare it and ifndef generates true and it will include the libraries and the constant TRUE=1 used in fundamentals.c

# include <stdio.h> // without this library the program will not run and return anything
# include <stdlib.h> // The use of this header is for the program to be able to use functions like atoi() in the c program.
# include <string.h> // this header will store the arrays that the user input entered inside funtamentals.c without it theres no manipulation in the character arrays.
#define TRUE 1 // a macro with value = 1 is created to be used in the source file for looping
void fundamentals(); // function prototype with no return value to be defined in the c file

#endif// #endif here will close #ifndef statement and fully process it