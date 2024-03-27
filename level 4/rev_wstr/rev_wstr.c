#include <unistd.h>

int     ft_strlen(char *s)
{
        int     i = 0;
        while (s[i])
                i++;
        return (i);
}

int     main(int argc, char **argv)
{
        int     start;
        int     end;

        if (argc == 2)
        {
                int     i = ft_strlen(argv[1]) - 1;

                while (i >= 0)
                {
                        while (argv[1][i] == '\t' || argv[1][i] == ' ') 
                                i--;
                        end = i;
                        while (argv[1][i] && (argv[1][i] != '\t' && argv[1][i] != ' ')) 
                                i--;
                        start = i + 1;
                        int     flag = start; // flag to check if it is the first word
                        while (start <= end)
                        {
                                write(1, &argv[1][start], 1);
                                start++;
                        }
                        if (flag != 0) // if it is not the first word
                                write(1, " ", 1);
                }

        }
        write(1, "\n", 1);
}