/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_dispatch.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hualei <hua.lei@learner.42.tech>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/16 17:31:32 by hualei            #+#    #+#             */
/*   Updated: 2026/11/18 21:34:32 by hualei           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// handle functions according to conversion specifier

#include "ft_printf.h"

int	ft_printf_dispatch(char specifier, va_list *args)
{
	if (specifier == 'c')
		return (ft_print_char_conversion(args));
	else if (specifier == 's')
		return (ft_print_string_conversion(args));
	else if (specifier == 'p')
		return (ft_print_pointer_conversion(args));
	else if (specifier == 'd' || specifier == 'i')
		return (ft_print_number_conversion(args));
	else if (specifier == 'u')
		return (ft_print_unsigned_conversion(args));
	else if (specifier == 'x' || specifier == 'X')
		return (ft_print_hex_conversion(args, specifier));
	else if (specifier == '%')
		return (ft_print_char('%'));
	return (-1);
}
