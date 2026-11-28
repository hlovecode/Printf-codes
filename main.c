/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hualei <hua.lei@learner.42.tech>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/18 22:28:58 by hualei            #+#    #+#             */
/*   Updated: 2026/11/28 09:04:06 by hualei           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <limits.h>
#include <stdio.h>

int	main(void)
{
	int				number;
	unsigned int	unsigned_number;
	int				ft_count;
	int				printf_count;

	number = 42;
	unsigned_number = UINT_MAX;
	printf("== Test 1: %%c ==\n");
	printf("ft_printf: ");
	ft_count = ft_printf("Character: %c\n", 'A');
	printf("printf:    ");
	printf_count = printf("Character: %c\n", 'A');
	printf("Return values: ft_printf = %d, printf = %d\n\n", ft_count,
		printf_count);
	printf("== Test 2: %%s ==\n");
	printf("ft_printf: ");
	ft_count = ft_printf("String: %s\n", "Hello 42");
	printf("printf:    ");
	printf_count = printf("String: %s\n", "Hello 42");
	printf("Return values: ft_printf = %d, printf = %d\n\n", ft_count,
		printf_count);
	printf("== Test 3: %%p ==\n");
	printf("ft_printf: ");
	ft_count = ft_printf("Pointer: %p\n", (void *)&number);
	printf("printf:    ");
	printf_count = printf("Pointer: %p\n", (void *)&number);
	printf("Return values: ft_printf = %d, printf = %d\n\n", ft_count,
		printf_count);
	printf("== Test 4: %%d ==\n");
	printf("ft_printf: ");
	ft_count = ft_printf("Integer: %d\n", INT_MIN);
	printf("printf:    ");
	printf_count = printf("Integer: %d\n", INT_MIN);
	printf("Return values: ft_printf = %d, printf = %d\n\n", ft_count,
		printf_count);
	printf("== Test 5: %%i ==\n");
	printf("ft_printf: ");
	ft_count = ft_printf("Integer: %i\n", -12345);
	printf("printf:    ");
	printf_count = printf("Integer: %i\n", -12345);
	printf("Return values: ft_printf = %d, printf = %d\n\n", ft_count,
		printf_count);
	printf("== Test 6: %%u ==\n");
	printf("ft_printf: ");
	ft_count = ft_printf("Unsigned: %u\n", unsigned_number);
	printf("printf:    ");
	printf_count = printf("Unsigned: %u\n", unsigned_number);
	printf("Return values: ft_printf = %d, printf = %d\n\n", ft_count,
		printf_count);
	printf("== Test 7: %%x ==\n");
	printf("ft_printf: ");
	ft_count = ft_printf("Hexadecimal: %x\n", 255);
	printf("printf:    ");
	printf_count = printf("Hexadecimal: %x\n", 255);
	printf("Return values: ft_printf = %d, printf = %d\n\n", ft_count,
		printf_count);
	printf("== Test 8: %%X ==\n");
	printf("ft_printf: ");
	ft_count = ft_printf("Hexadecimal: %X\n", 255);
	printf("printf:    ");
	printf_count = printf("Hexadecimal: %X\n", 255);
	printf("Return values: ft_printf = %d, printf = %d\n\n", ft_count,
		printf_count);
	printf("== Test 9: %%%% ==\n");
	printf("ft_printf: ");
	ft_count = ft_printf("Percentage: 100%%\n");
	printf("printf:    ");
	printf_count = printf("Percentage: 100%%\n");
	printf("Return values: ft_printf = %d, printf = %d\n\n", ft_count,
		printf_count);
	printf("== Test 10: Combined ==\n");
	printf("ft_printf: ");
	ft_count = ft_printf("Name: %s, Age: %d, Rate: %x%%\n", "Tom", 25, 255);
	printf("printf:    ");
	printf_count = printf("Name: %s, Age: %d, Rate: %x%%\n", "Tom", 25, 255);
	printf("Return values: ft_printf = %d, printf = %d\n\n", ft_count,
		printf_count);
	return (0);
}
