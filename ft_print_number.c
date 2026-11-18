/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_number.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hualei <hua.lei@learner.42.tech>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/18 11:18:21 by hualei            #+#    #+#             */
/*   Updated: 2026/11/18 21:09:27 by hualei           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

// handle %d and %i
static int	ft_num_recursive(unsigned int num)
{
	int	result;
	int	count;

	count = 0;
	if (num >= 10)
	{
		result = ft_num_recursive(num / 10);
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

int	ft_print_number(int num)
{
	unsigned int	digital;
	long			temp;
	int				count;
	int				result;

	count = 0;
	temp = num;
	if (temp < 0)
	{
		result = ft_print_char('-');
		if (result == -1)
			return (-1);
		count += result;
		temp = -temp;
	}
	digital = (unsigned int)temp;
	result = ft_num_recursive(digital);
	if (result == -1)
		return (-1);
	count += result;
	return (count);
}

int	ft_num_conversion(va_list *args)
{
	int	num;

	num = va_arg(*args, int);
	return (ft_print_number(num));
}
