/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lisa <lisa@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/28 11:08:02 by lciullo           #+#    #+#             */
/*   Updated: 2023/02/24 20:52:19 by lisa             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putchar(char c, int *size)
{
	if (*size != -1)
	{
		if (write(1, &c, 1) != -1)
			*size = *size + 1;
		else
			*size = -1;
	}
}

void	ft_putstr(char *str, int *size)
{
	int	i;

	i = 0;
	if (!str)
	{
		ft_putstr("(null)", size);
		return ;
	}
	while (str[i] != '\0')
	{
		ft_putchar(str[i], size);
		i++;
	}	
}

void	ft_putnbr(int number, int *size)
{
	if (number == -2147483648)
	{
		ft_putstr("-2147483648", size);
		return ;
	}
	if (number < 0)
	{
		ft_putchar('-', size);
		ft_putnbr(number * (-1), size);
	}
	else if (number > 9)
	{
		ft_putnbr(number / 10, size);
		ft_putnbr(number % 10, size);
	}
	if (number >= 0 && number <= 9)
		ft_putchar(number + '0', size);
}

void	ft_putnbr_base(long int nb, long int len, \
			char *base, int *size)
{
	if (nb < 0)
	{
		ft_putchar('-', size);
		nb = nb * (-1);
		ft_putnbr_base(nb, len, base, size);
	}
	else if (nb / len)
	{
		ft_putnbr_base(nb / len, len, base, size);
		ft_putchar(base[nb % len], size);
	}
	else
		ft_putchar(base[nb % len], size);
}
