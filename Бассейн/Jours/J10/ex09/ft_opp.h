/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_opp.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adespond <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/09/16 20:10:31 by adespond          #+#    #+#             */
/*   Updated: 2015/09/16 20:11:15 by adespond         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_OPP_H
# define FT_OPP_H
t_opp g_opptab[] =
{
	{"-", &ft_sub},
	{"+", &ft_add},
	{"*", &ft_mul},
	{"/", &ft_div},
	{"%", &ft_mod},
	{"", &ft_usage}
};
#endif
