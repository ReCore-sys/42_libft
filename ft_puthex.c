/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kshore <kshore@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/18 14:14:13 by kshore           #+#    #+#             */
/*   Updated: 2023/10/30 15:21:02 by kshore           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_hexlower(unsigned int nb)
{
	int		i;
	char	*hex;

	hex = "0123456789abcdef";
	i = 0;
	(nb >= 16) && (i += ft_hexlower(nb / 16));
	i += ft_putchar(hex[nb % 16]);
	return (i);
}

int	ft_hexupper(unsigned int nb)
{
	int		i;
	char	*hex;

	hex = "0123456789ABCDEF";
	i = 0;
	(nb >= 16) && (i += ft_hexupper(nb / 16));
	i += ft_putchar(hex[nb % 16]);
	return (i);
}

int	ft_hexptr(unsigned long nb)
{
	int		i;
	char	*hex;

	hex = "0123456789abcdef";
	i = 0;
	(nb >= 16) && (i += ft_hexptr(nb / 16));
	i += ft_putchar(hex[nb % 16]);
	return (i);
}

int	ft_pointer(unsigned long ptr)
{
	int	i;

	i = 2;
	ft_putchar('0');
	ft_putchar('x');
	i += ft_hexptr(ptr);
	return (i);
}
