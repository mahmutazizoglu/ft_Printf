/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putx.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maazizog <maazizog@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/17 18:05:19 by maazizog          #+#    #+#             */
/*   Updated: 2026/05/17 19:24:12 by maazizog         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putx(unsigned int nbr, char type)
{
	int		count;
	char	*base;

	count = 0;
	if (type == 'x')
		base = "0123456789abcdef";
	else
		base = "0123456789ABCDEF";
	if (nbr > 15)
		count += ft_putx(nbr / 16, type);
	count += ft_putchar(base[nbr % 16]);
	return (count);
}
