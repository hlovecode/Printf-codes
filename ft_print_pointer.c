/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_pointer.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hualei <hua.lei@learner.42.tech>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/18 11:19:43 by hualei            #+#    #+#             */
/*   Updated: 2026/11/18 21:30:23 by hualei           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

// handle %p
static int	ft_pointer_recursive(uintptr_t addr)
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
	uintptr_t	address;
	int			count;
	int			result;

	address = (uintptr_t)ptr;
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
