/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rush02.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cerodrig <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/01 23:32:40 by cerodrig          #+#    #+#             */
/*   Updated: 2018/04/01 23:32:42 by cerodrig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "librush.h"

void	ft_rush02(int x, int y)
{
	write(1, "[rush-02]", 9);
	ft_putdims(x, y);
	write(1, "\n", 1);
}