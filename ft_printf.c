/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hualei <hua.lei@learner.42.tech>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/16 17:31:00 by hualei            #+#    #+#             */
/*   Updated: 2026/11/18 21:44:52 by hualei           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

// handle %
static int	ft_prcent_conversion(const char **format, va_list *args)
{
	int	result;

	(*format)++;
	if (**format == '\0')
		return (-1);
	result = ft_printf_dispatch(**format, args);
	(*format)++;
	return (result);
}

// the function iterate through the format string
// format: the last fixed argument
int	ft_printf(const char *format, ...)
{
	va_list	args;
	int		count;
	int		result;

	count = 0;
	va_start(args, format);
	while (*format)
	{
		if (*format == '%')
			result = ft_prcent_conversion(&format, &args);
		else
		{
			result = ft_print_char(*format);
			format++;
		}
		if (result == -1)
		{
			va_end(args);
			return (-1);
		}
		count += result;
	}
	va_end(args);
	return (count);
}
