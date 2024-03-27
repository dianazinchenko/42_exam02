#include <unistd.h>

void    print_bits(unsigned char octet)
{
        int     i = 8;
        unsigned char   bit;

        while (i--)
        {
                bit = (octet >> i & 1) + '0';
                write(1, &bit, 1);
        }
}

/*
In each iteration, it calculates the value of the i-th bit from the right 
of octet using the expression (octet >> i & 1).
This involves shifting the bits of octet to the right by i places and then
 bitwise-ANDing the result with 1 to isolate the last bit.

It adds '0' to the bit value to convert it to a character (either '0' or '1'),
 and stores the result in bit.
*/

int main() {
    print_bits(5);  // Should print: 00000101
    write(1, "\n", 1);
    print_bits(255); // Should print: 11111111
    return 0;
}