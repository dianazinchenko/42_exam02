char    to_lower(char c)
{
        if (c >= 'A' && c <= 'Z')
                return (c += 32);
        return (c);
}

int     get_digit(char c, int base_digits)
{
        int     max_digit;

        if (base_digits <= 10)
                max_digit = base_digits + '0';
        else
                max_digit = base_digits - 10 + 'a';
        if (c <= max_digit && (c >= '0' && c <= '9'))
                return (c - '0');
        else if (c <= max_digit && (c >= 'a' && c <= 'z'))
                return (c - 'a' + 10);
        else
                return (-1);
}

int     ft_atoi_base(const char *str, int str_base)
{
        int     i = 0;
        int     sign = 1;
        int     res = 0;
        int     digit;

        if (str[i] == '-')
        {
                sign = -1;
                i++;
        }
        digit = get_digit(to_lower(str[i]), str_base);
        while (digit >= 0)
        {
                res *= str_base;
                res += digit;
                i++;
                digit = get_digit(to_lower(str[i]), str_base);
        }
        return (res * sign);
}

/*
#include <stdio.h>
#include <stdlib.h>

int     main(int argc, char ** argv)
{
        if (argc == 3)
        {
                printf("%i\n", ft_atoi_base(argv[1], atoi(argv[2])));
        }
}*/