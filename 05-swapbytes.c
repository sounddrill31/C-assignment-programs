#include <stdio.h>

int main() 
{
    unsigned int a; 
    scanf("%08X", &a);
    //Write code below
short b;
b= *((short*)&a);
*((short *) &a) = *((short *)&a + 1);
*((short *)&a+1)=b;
    printf("%08X",a);
    return 0;
}