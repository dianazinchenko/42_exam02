#include <unistd.h>

void    print_bits(unsigned char octet)
{
        int     i = 7; // Start at 7 because we want to print 8 bits (0-7)

        while (i >= 0)
        {
                if (octet >> i & 1) // If the i-th bit is 1
                        write(1, "1", 1);
                else
                        write(1, "0", 1);
                i--;
        }
}

int     main(void)
{
        unsigned char octet = 2;
        print_bits(octet);
}