/*The strpbrk() function locates in the null-terminated string s the first
     occurrence of any character in the string charset and returns a pointer
     to this character.  If no characters from charset occur anywhere in s
     strpbrk() returns NULL.*/

char *ft_strpbrk(const char *s1, const char *s2)
{
    int i = 0;
    int j = 0;
    if (!s1 || !s2)
        return (0);
    while (s1[i]) // use while loop to iterate through the string s1
    {
        j = 0;
        while (s2[j]) // use while loop to iterate through the string s2
        {
            if (s1[i] == s2[j]) //  if the character in s1 matches the character in s2
                return ((char*)&s1[i]); // cast to char* to match the return type
            j++; 
        }
        i++;
    }
    return (0);
}

#include <stdio.h>

int main(int argc, char **argv)
{
    if (argc == 3)
    {
        printf("%s\n", ft_strpbrk(argv[1], argv[2]));
    }
    return (0);
}