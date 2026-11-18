/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_unsigned.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hualei <hua.lei@learner.42.tech>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/18 11:18:52 by hualei            #+#    #+#             */
/*   Updated: 2026/11/18 21:20:29 by hualei           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

// handle %u
static int	ft_unsigned_recursive(unsigned int num)
{
	int	result;
	int	count;

	count = 0;
	if (num >= 10)
	{
		result = ft_unsigned_recursive(num / 10);
		if (result == -1)
			return (-1);
		count += result;
	}
	result = ft_print_char((num % 10) + '0');
	if (result == -1)
		return (-1);
	count += result;
	return (count);
}

int	ft_print_unsigned(unsigned int num)
{
	return (ft_unsigned_recursive(num));
}

int	ft_unsigned_conversion(va_list *args)
{
	unsigned int	num;

	num = va_arg(*args, unsigned int);
	return (ft_print_unsigned(num));
}
