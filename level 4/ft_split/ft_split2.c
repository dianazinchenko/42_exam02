#include <stdlib.h>

int     is_space(char c)
{
        return (c == ' ' || c == '\t' || c == '\n');
}

char    *ft_strncpy(char *s1, char *s2, int n)
{
        int     i = 0;

        while (i < n && s2[i])
        {
                s1[i] = s2[i];
                i++;
        }
        s1[i] = '\0';
        return (s1);
}

char    **ft_split(char *str)
{
        int     i = 0;
        int     j = 0;
        int     k = 0;
        int     word_count = 0;
        char    **array_words;

        while (str[i])
        {
                while (str[i] && is_space(str[i]))
                        i++;
                if (str[i])
                        word_count++;
                while (str[i] && !is_space(str[i]))
                        i++;
        }
        array_words = malloc(sizeof(char *) * word_count + 1);
        if (!array_words)
                return (NULL);
        i = 0;
        while (str[i])
        {
                while (str[i] && is_space(str[i]))
                        i++;
                j = i;
                while (str[i] && !is_space(str[i]))
                        i++;
                if (i > j)
                {
                        array_words[k] = malloc((i - j) + 1);
                        ft_strncpy(array_words[k++], &str[j], i - j);
                }
        }
        array_words[k] = NULL;
        return (array_words);
}