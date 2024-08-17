#include <unistd.h>

void    ft_print(char *s1, char *s2)
{
    int i = 0;
    int tab[256] = {0};
    while (s2[i])
        tab[(int) s2[i++]] = 1;
    i = 0;
    while (s1[i])
    {
        if (tab[(int) s1[i]] == 1)
        {
            write(1, &s1[i], 1);
            tab[(int) s1[i]] = 2;
        }
        i++;
    }
}

int main(int ac, char **av)
{
    if (ac == 3)
        ft_print(av[1], av[2]);
    write(1, "\n", 1);
}