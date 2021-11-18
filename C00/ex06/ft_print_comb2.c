#include <unistd.h>

void    ft_putchar(char c)
{
    write(1, &c, 1);
}

void    ft_print_digits(int x)
{
    if (x < 10)
    {
        ft_putchar('0');
        ft_putchar(x + '0');
    }
    else
    {
        ft_putchar(x / 10 + '0');
        ft_putchar(x % 10 + '0');
    }
}

void    ft_print_number(int a, int b)
{
    ft_print_digits(a);
    ft_putchar(' ');
    ft_print_digits(b);
    if ( a != 98 || b != 99)
    {
        write(1, ", ", 2);
    }
}

void    ft_print_comb2(void)
{
    int a;
    int b;

    a = 0;
    while (a <= 98)
    {
        b = a + 1;
        while (b <= 99)
        {
            ft_print_number(a, b);
            b++;
        }
        a++;
    };
}
