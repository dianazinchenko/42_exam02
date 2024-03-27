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

void    ft_putchar(char c)
{
        write(1, &c, 1);
}

void    ft_putnbr(int n)
{
        if (n >= 10)
        {
                ft_putnbr(n / 10);
                ft_putnbr(n % 10);
        }
        else
                ft_putchar(n + '0');
}

int     is_prime(int n)
{
        int     i = 2;

        while (i <= (n / 2))
        {
                if ((n % i) == 0)
                        return (0);
                i++;
        }
        return (1);
}

int     main(int argc, char **argv)
{
        if (argc != 2)
        {
                write(1, "0\n", 2);
                return (1);
        }

        int     sum = 0;
        int     i = 2;
        int     number = ft_atoi(argv[1]);

        while (i <= number)
        {
                if (is_prime(i) == 1)
                        sum += i;
                i++;
        }
        ft_putnbr(sum);
        write(1, "\n", 1);
}