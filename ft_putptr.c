/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putptr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maazizog <maazizog@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/15 14:33:31 by maazizog          #+#    #+#             */
/*   Updated: 2026/05/15 19:28:16 by maazizog         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_putptr_hex(uintptr_t n)
{
	int		count;
	char	*base;

	base = "0123456789abcdef";
	count = 0;
	if (n >= 16)
		count += ft_putptr_hex(n / 16);
	count += ft_putchar(base[n % 16]);
	return (count);
}

int	ft_putptr(void *ptr)
{
	int			count;
	uintptr_t	addr;

	if (!ptr)
		return (ft_putstr("(nil)"));
	addr = (uintptr_t)ptr;
	count = 0;
	count += ft_putstr("0x");
	count += ft_putptr_hex(addr);
	return (count);
}
