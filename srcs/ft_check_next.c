/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_next.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anoroita <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/16 15:26:50 by anoroita          #+#    #+#             */
/*   Updated: 2018/08/05 13:35:26 by anoroita         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_set_hash(t_pf *ft, const char *format)
{
	(void)format;
	ft->hash = 1;
}

void	ft_set_zero(t_pf *ft, const char *format)
{
	(void)format;
	ft->zero = 1;
}

void	ft_set_minus(t_pf *ft, const char *format)
{
	(void)format;
	ft->minus = 1;
}

void	ft_set_plus(t_pf *ft, const char *format)
{
	(void)format;
	ft->plus = 1;
}

void	ft_set_space(t_pf *ft, const char *format)
{
	(void)format;
	ft->space = 1;
}
