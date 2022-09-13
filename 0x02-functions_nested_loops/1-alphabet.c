/**
 *File: 1-alphabet.c
 *Auth: Muhammed Abdulrahaman Adinoyi
 */
#include "main.h"
/**
 *print_alphabets-prints the alphabets in lower case, followed by a new line
 */
void print_alphabet(void)
{
    char letter;

    for (letter = 'a'; letter <= 'z'; letter++)
    {
        _putchar(letter);
    }
    _putchar("\n");
}
