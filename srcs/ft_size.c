/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_size.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anoroita <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/16 15:29:54 by anoroita          #+#    #+#             */
/*   Updated: 2018/08/05 13:28:16 by anoroita         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int		ft_nbrlen(intmax_t nbr)
{
	int x;

	x = 0;
	if (nbr < 0)
	{
		x++;
		if (nbr < -9)
		{
			x += ft_nbrlen((nbr / 10) * -1);
			x += ft_nbrlen((nbr % 10) * -1);
		}
		else
			x += ft_nbrlen(-nbr);
	}
	else if (nbr > 9)
	{
		x += ft_nbrlen(nbr / 10);
		x += ft_nbrlen(nbr % 10);
	}
	else
		x++;
	return (x);
}
