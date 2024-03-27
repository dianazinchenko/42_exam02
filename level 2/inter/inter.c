#include <unistd.h>

int     main(int argc, char **argv)
{
        if (argc == 3)
        {
                int     i = 0;
                int     j = 0;
                char    printed[256] = {0};
                char    *s1 = NULL;
                char    *s2 = NULL;

                s1 = argv[1];
                s2 = argv[2];
                while(s1[i])
                {
                        j = 0;
                        while (s2[j])
                        {
                                if (s1[i] == s2[j] && !printed[(int)s1[i]])
                                {
                                        write(1, &s1[i], 1);
                                        printed[(int)s1[i]] = 1;
                                }
                                j++;
                        }
                        i++;
                }
        }
        write(1, "\n", 1);
}