//Abdoul Djedje lab1 08-29-2024
// this file will call the random.c function which was declared from the header file 
//Given Project code
#include "random.h" // For header file that links all the functions together 
#include <stdio.h>
#include <stdlib.h> // For malloc(), free(), and srand()
#include <time.h>   // For time()

char* rand_string_alloc(size_t size) {
     char *s = malloc(size + 1); // Allocate memory for the string (size + 1 for null terminator)
     if (s) {
         rand_string(s, size); // Generate the random string
     }
     return s; // Return the pointer to the allocated string
}

void rand_string(char *s, size_t givenSize) { // Generates a random string of given size
    for (size_t i = 0; i < givenSize; i++) {
        s[i] = randchar(); // Assign a generated character to each position of the given length of the string 
    }
    s[givenSize] = '\0'; // Null-terminate the string to avoid the index out of bounds error
}

// Main function to generate a random 7-letter string using randchar() and the function given 
int main() {
    srand(time(NULL)); // Seed the random number generator with the current time

    size_t size = 7; // Define the size of the random string
    char *random_str = rand_string_alloc(size); // Allocate and generate the random string

    if (random_str) {
        printf("Random string: %s\n", random_str); // Print the random string
        free(random_str); // Free the allocated memory
    } else {
        printf("Memory allocation failed.\n"); // Handle memory allocation failure
    }

    return 0;
}

/* The following commands need to be typed into the terminal to link the files together 
gcc -c random.c -o random.o
gcc -c print_random.c -o print_random.o
gcc random.o print_random.o -o print_random
Then, type the command "./print_random" to compile the program 
*/