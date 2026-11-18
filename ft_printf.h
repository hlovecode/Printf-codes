/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hualei <hua.lei@learner.42.tech>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/16 16:59:32 by hualei            #+#    #+#             */
/*   Updated: 2026/11/18 13:11:29 by hualei           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <stdint.h>
# include <stdlib.h>
# include <unistd.h>

/* prototype */
int	ft_printf(const char *format, ...);

/* dispatcher */
int	ft_printf_dispatch(char specifier, va_list *args);

/* character */
int	ft_print_char(char c);
int	ft_char_conversion(va_list *args);

/* string */
int	ft_print_string(char *str);
int	ft_string_conversion(va_list *args);

/* number */
int	ft_print_number(int number);
int	ft_print_number_conversion(va_list *args);

/* unsigned number */
int	ft_print_unsigned(unsigned int number);
int	ft_print_unsigned_conversion(va_list *args);

/* hexadecimal */
int	ft_print_hex(unsigned int number, char specifier);
int	ft_print_hex_conversion(va_list *args, char specifier);

/* pointer */
int	ft_print_pointer(void *ptr);
int	ft_print_pointer_conversion(va_list *args);

#endif
