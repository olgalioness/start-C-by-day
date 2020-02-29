//
//  ft_show_tab.c
//  21_school
//
//  Created by Татьяна Исрапилова on 25/08/2019.
//  Copyright © 2019 Татьяна Исрапилова. All rights reserved.
//

#include "ft_stock_par.h"

void    ft_putchar(char c);

void    ft_putnbr(int nb)
{
    if (nb == -2147483648)
    {
        ft_putchar('-');
        ft_putchar('2');
        ft_putnbr(147483648);
    }
    else if (nb < 0)
    {
        ft_putchar('-');
        ft_putnbr(nb * (-1));
    }
    else
    {
        if (nb >= 10)
            ft_putnbr(nb / 10);
        ft_putchar((nb % 10) + '0');
    }
}

void    ft_putstr(char *str)
{
    while (*str != '\0')
        ft_putchar(*str++);
}

void    ft_show_tab(struct s_stock_par *par)
{
    int i;
    int j;
    
    i = 0;
    while (par[i].str != NULL)
    {
        ft_putstr(par[i].copy);
        ft_putchar('\n');
        ft_putnbr(par[i].size_param);
        ft_putchar('\n');
        j = 0;
        while (par[i].tab[j])
        {
            ft_putstr(par[i].tab[j]);
            ft_putchar('\n');
            ++j;
        }
        ++i;
    }
}
