//Abdoul Djedje lab1 08-29-2024 (header file which will link both random.c and print_random.c together)
#ifndef string_h
#define string_h
#include <stddef.h> // For size_t because it gives me an error without this included statement 



// Function declarations
char randchar();                   // Generates a random character
void rand_string(char *s, size_t givenSize); // Generates a random string of given size
char* rand_string_alloc(size_t size); // Allocates memory for a string and generates it

#endif // random.h