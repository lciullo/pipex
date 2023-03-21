/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_arg.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lisa <lisa@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/29 15:09:44 by lciullo           #+#    #+#             */
/*   Updated: 2023/02/24 20:52:27 by lisa             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	print_p(va_list arg, int *size)
{
	ft_putstr("0x", size);
	ft_putnbr_base(va_arg(arg, unsigned long), 16, "0123456789abcdef", size);
}

void	check_arg(char c, va_list arg, int *size)
{
	if (c == 'c')
		ft_putchar(va_arg(arg, int), size);
	else if (c == 's')
		ft_putstr(va_arg(arg, char *), size);
	else if (c == 'd' || c == 'i')
		ft_putnbr(va_arg(arg, int), size);
	else if (c == 'u')
		ft_putnbr_base(va_arg(arg, unsigned int), 10, "0123456789", size);
	else if (c == 'x')
		ft_putnbr_base(va_arg(arg, unsigned int), 16, "0123456789abcdef", size);
	else if (c == 'X')
		ft_putnbr_base(va_arg(arg, unsigned int), 16, "0123456789ABCDEF", size);
	else if (c == 'p')
		print_p(arg, size);
	else if (c == '%')
		ft_putchar('%', size);
}
