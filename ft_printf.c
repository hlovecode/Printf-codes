/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hualei <hua.lei@learner.42.tech>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/16 17:31:00 by hualei            #+#    #+#             */
/*   Updated: 2026/11/28 12:16:16 by hualei           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

/*
	role de ft_printf：
		- Parcourir la chaîne de format (遍历格式字符串)
		- Identifier le caractère % (识别 %)
		- Déterminer le caractère de conversion actuel (判断当前转换符)
		- Appeler la fonction Dispatch (调用 Dispatch 函数)
		- Compter le nombre de caractères de sortie (统计输出字符数量)
*/
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
