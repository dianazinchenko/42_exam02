#include <stdio.h>
#include <stdlib.h>

int     main(int argc, char **argv)
{
        if (argc == 2)
        {
                int     n = atoi(argv[1]);
                int     i = 2;

                if (n == 1)
                        printf("1");
                while (n >= i) // while all prime factors aren't found
                {
                        while (n % i == 0)
                        {
                                printf("%i", i);
                                n /= i;
                                if (n != 1) // if there are more prime factors
                                        printf("*");
                        }
                        i++;
                }

        }
        printf("\n");
}