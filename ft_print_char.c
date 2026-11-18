/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_char.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hualei <hua.lei@learner.42.tech>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/18 11:17:25 by hualei            #+#    #+#             */
/*   Updated: 2026/11/18 21:50:56 by hualei           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

// handle %c and regular characters
int	ft_print_char(char c)
{
	if (write(1, &c, 1) == -1)
		return (-1);
	return (1);
}

int	ft_char_conversion(va_list args)
{
	char	c;
	int		result;

	c = (char)va_arg(args, int);
	result = ft_print_char(c);
	return (result);
}
