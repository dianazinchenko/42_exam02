int         is_power_of_2(unsigned int n)
{
        if (n <= 1)
                return (0);
        else
                return ((n & (n - 1)) == 0); 
}
/*
#include <stdio.h>
#include <stdlib.h>

int     main(int argc, char **argv)
{
        if (argc == 2)
        {
                printf("%i\n", is_power_of_2(atoi(argv[1])));
        }
}*/