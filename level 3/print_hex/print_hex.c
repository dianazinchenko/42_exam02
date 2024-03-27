#include <unistd.h>

int     ft_atoi(char *s)
{
        int     i = 0;
        int     res = 0;

        while (s[i] >= '0' && s[i] <= '9')
        {
                res = res * 10 + s[i] - '0';
                i++;
        }
        return (res);
}

void    print_hex(int n)
{
        char    hexadecimals[] = "0123456789abcdef";

        if (n >= 16)
                print_hex(n / 16);
        write(1, &hexadecimals[n % 16], 1);
}

int     main(int argc, char **argv)
{
        if (argc == 2)
        {
                int     n = ft_atoi(argv[1]);
                print_hex(n);
        }
        write(1, "\n", 1);
}