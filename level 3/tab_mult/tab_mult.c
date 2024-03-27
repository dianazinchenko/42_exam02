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
        }
        ft_putchar(n % 10 + '0');
}

int     main(int argc, char **argv)
{
        if (argc != 2)
                write(1, "\n", 1);
        else
        {
                int     n = ft_atoi(argv[1]);
                int     i = 1;

                while (i <= 9)
                {
                        ft_putnbr(i);
                        write(1, " x ", 3);
                        ft_putnbr(n);
                        write(1, " = ", 3);
                        ft_putnbr(i * n);
                        write(1, "\n", 1);
                        i++;
                }
        }
}