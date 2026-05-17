/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_typecheck.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maazizog <maazizog@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/15 09:47:10 by maazizog          #+#    #+#             */
/*   Updated: 2026/05/17 19:01:58 by maazizog         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_typecheck(const char type, va_list args)
{
	int	count;

	count = 0;
	if (type == 'c')
		count += ft_putchar(va_arg(args, int));
	else if (type == 's')
		count += ft_putstr(va_arg(args, char *));
	else if (type == 'p')
		count += ft_putptr(va_arg(args, void *));
	else if (type == 'd')
		count += ft_putnbr(va_arg(args, int));
	else if (type == 'i')
		count += ft_putnbr(va_arg(args, int));
	else if (type == 'u')
		count += ft_putuns(va_arg(args, unsigned int));
	else if (type == 'x' || type == 'X')
		count += ft_putx(va_arg(args, unsigned int), type);
	else if (type == '%')
		return (write(1, "%", 1));
	return (count);
}
