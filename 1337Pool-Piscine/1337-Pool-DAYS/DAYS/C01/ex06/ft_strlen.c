#include <unistd.h>

void    ft_putchar(char c)
{
    write(1, &c, 1);
}

void    ft_print_numbers(int i)
{
    if (i >= 10)
        ft_print_numbers(i / 10);
    ft_putchar((i % 10) + '0');

}

int	ft_strlen(char *str)
{
    int i;

    i = 0;

    while (str[i] != '\0')
    {
        i++;
    }
    return (i);
}

