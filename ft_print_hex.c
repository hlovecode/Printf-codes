/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_hex.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hualei <hua.lei@learner.42.tech>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/18 11:19:17 by hualei            #+#    #+#             */
/*   Updated: 2026/11/20 22:21:29 by hualei           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

// handle %x and %X
static int	ft_hex_recursive(unsigned int num, const char *base)
{
	int	result;
	int	count;

	count = 0;
	if (num >= 16)
	{
		result = ft_hex_recursive(num / 16, base);
		if (result == -1)
			return (-1);
		count += result;
	}
	result = ft_print_char(base[num % 16]);
	if (result == -1)
		return (-1);
	count += result;
	return (count);
}

int	ft_print_hex(unsigned int num, char specifier)
{
	const char	*base;

	if (specifier == 'x')
		base = "0123456789abcdef";
	else
		base = "0123456789ABCDEF";
	return (ft_hex_recursive(num, base));
}

int	ft_hex_conversion(va_list *args, char specifier)
{
	unsigned int	num;

	num = va_arg(*args, unsigned int);
	return (ft_print_hex(num, specifier));
}
