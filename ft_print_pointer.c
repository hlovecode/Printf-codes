/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_pointer.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hualei <hua.lei@learner.42.tech>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/18 11:19:43 by hualei            #+#    #+#             */
/*   Updated: 2026/11/23 17:06:38 by hualei           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

// handle %p
static int	ft_pointer_recursive(unsigned long addr)
{
	int	result;
	int	count;

	count = 0;
	if (addr >= 16)
	{
		result = ft_pointer_recursive(addr / 16);
		if (result == -1)
			return (-1);
		count += result;
	}
	result = ft_print_char("0123456789abcdef"[addr % 16]);
	if (result == -1)
		return (-1);
	count += result;
	return (count);
}

static int	ft_pointer_prefix(void)
{
	int	result;

	result = ft_print_char('0');
	if (result == -1)
		return (-1);
	result = ft_print_char('x');
	if (result == -1)
		return (-1);
	return (2);
}

int	ft_print_pointer(void *ptr)
{
	unsigned long	address;
	int				count;
	int				result;

	if (ptr == NULL)
	{
		write(1, "(nil)", 5);
		return (5);
	}
	address = (unsigned long)ptr;
	result = ft_pointer_prefix();
	if (result == -1)
		return (-1);
	count = result;
	result = ft_pointer_recursive(address);
	if (result == -1)
		return (-1);
	count += result;
	return (count);
}

int	ft_pointer_conversion(va_list *args)
{
	void	*ptr;

	ptr = va_arg(*args, void *);
	return (ft_print_pointer(ptr));
}
