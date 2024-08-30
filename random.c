//Abdoul Djedje lab1 08-29-2024
#include "random.h" // header file that links random.c and print_random.c together 
#include <stdio.h>
#include <stdlib.h>
#include <time.h>


char randchar() {// This function returns a random character between 'A' and 'Z'
    return 'A' + rand() % 26; // 'A' + random number between 0 and 25
                                //(so it will add A to the random number generated which will = a random letter in the alphabet)
}