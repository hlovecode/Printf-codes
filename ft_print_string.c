/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_string.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hualei <hua.lei@learner.42.tech>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/18 11:17:53 by hualei            #+#    #+#             */
/*   Updated: 2026/11/18 13:12:45 by hualei           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

// handle %s
int	ft_print_string(char *str)
{
	int	count;
	int	result;

	count = 0;
	if (!str)
		str = "(null)";
	while (str[count])
	{
		result = ft_print_char(str[count]);
		if (result == -1)
			return (-1);
		count++;
	}
	return (count);
}

int	ft_string_conversion(va_list *args)
{
	char	*str;

	str = va_arg(*args, char *);
	return (ft_print_string(str));
}
