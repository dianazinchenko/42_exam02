unsigned int lcm(unsigned int a, unsigned int b)
{
        unsigned int n;

        if (a == 0 || b == 0)
                return (0);
        if (a > b) // LCM of two numbers is always greater than or equal to the larger number
                n = a;
        else
                n = b;
        while (1)
        {
                if (n % a == 0 && n % b == 0) // Check if n is divisible by both a and b
                        return (n);
                n++;
        }
}
/*
#include <stdio.h>
#include <stdlib.h>

int     main(int argc, char **argv)
{
        if (argc == 3)
        {
                unsigned int    a = atoi(argv[1]);
                unsigned int    b = atoi(argv[2]);

                printf("LCM: %u\n", lcm(a, b));
        }

}*/