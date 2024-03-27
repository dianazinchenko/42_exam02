#include <stdlib.h>
#include <stdio.h>

int     main(int argc, char **argv)
{
        if (argc == 2)
        {
                int     i = 2;
                int     n = atoi(argv[1]);

                if (n == 1)
                        printf("1");
                while (n >= i)
                {
                        if ((n % i) == 0)
                        {
                                printf("%i", i);
                                if (n == i)
                                        break;
                                printf("*");
                                n /= i;
                                i = 1;
                        }
                        i++;
                }
        }
        printf("\n");
}