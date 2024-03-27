int     ft_strlen(char *str)
{
        int     i = 0;

        while (str[i])
                i++;
        return (i);
}
/*
#include <stdio.h>

int     main(int argc, char **argv)
{
        if (argc == 2)
        {
                printf("String length: %i\n", ft_strlen(argv[1]));
        }
}*/