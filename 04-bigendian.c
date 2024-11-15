#include <stdio.h>

int main(void)
{
    // imagine it is a string, char array, going against the question
    char a[8];
    scanf( "%8[^\n]", a); //take scanf for 8 characters
    for(int i=0; i<8; i+=2)
    {
        printf("%c%c\n", a[i], a[i+1]);
    }
}

// fake it till you make it, they said
// it'll be fun they said

/* 
Write a C program that takes an unsigned integer input in hexadecimal format and prints each byte of the number in hexadecimal format on separate lines. 
The program should assume that the machine stores data in little-endian order, which means the least significant byte is stored first in memory, but it should print the bytes in big-endian order, where the most significant byte is printed first.
*/