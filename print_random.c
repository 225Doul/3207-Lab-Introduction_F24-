//Abdoul Djedje lab1 08-29-2024
// this file will call the random.c function which was declared from the header file 
//Given Project code
#include "random.h" // For header file that links all the functions together 
#include <stdio.h>
#include <stdlib.h> // For malloc(), free(), and srand()
#include <time.h>   // For time()


// Main function to generate a random 7-letter string using randchar() 
int main()
{
	int a;

	/* seed the randomizer */
	srand( (unsigned)time(NULL) );

	printf("Today's random word: ");
	for(a=0;a<7;a++)
		putchar( randchar() );
	putchar('\n');

	return(0);
}

/* The following commands need to be typed into the terminal to link the files together 
gcc -c random.c -o random.o
gcc -c print_random.c -o print_random.o
gcc random.o print_random.o -o print_random
Then, type the command "./print_random" to compile the program 
*/