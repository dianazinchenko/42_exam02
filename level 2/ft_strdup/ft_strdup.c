#include <stdlib.h>

int     ft_strlen(char *s)
{
        int     i = 0;

        while(s[i])
                i++;
        return (i);
}

char    *ft_strdup(char *src)
{
        int     i = 0;
        char    *copy = malloc(ft_strlen(src) + 1);

        while (src[i])
        {
                copy[i] = src[i];
                i++;
        }
        copy[i] = '\0';
        return (copy);
}
/*
#include <stdio.h>

int     main(int argc, char **argv)
{
        if (argc == 2)
        {
                printf("%s", ft_strdup(argv[1]));
        }
        printf("\n");
}*/