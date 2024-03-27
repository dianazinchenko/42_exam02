unsigned char	reverse_bits(unsigned char octet)
{
    int i = 8;
    unsigned char result = 0;

    while (i > 0)
    {
        result = result << 1 | (octet & 1); // shift result to the left and add the last bit of octet
        octet /= 2; // shift octet to the right
        i--;
    }
    return (result);
}

#include <stdio.h>

int main(void)
{
    unsigned char octet = 42;
    printf("%d\n", reverse_bits(octet));
    return (0);
}