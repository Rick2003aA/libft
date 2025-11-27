/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rtsubuku <rtsubuku@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/17 17:23:21 by rtsubuku          #+#    #+#             */
/*   Updated: 2025/10/25 13:48:12 by rtsubuku         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

static size_t	count_digits(long nb)
{
	size_t	len;

	len = 0;
	if (nb == 0)
		return (1);
	if (nb < 0)
		nb = -nb;
	while (nb)
	{
		len++;
		nb = nb / 10;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	size_t			len;
	long			nb;
	int				neg;
	char			*dest;

	nb = (long)n;
	neg = (nb < 0);
	len = count_digits(n);
	dest = (char *)malloc(len + neg + 1);
	if (!dest)
		return (NULL);
	dest[len + neg] = '\0';
	if (neg)
		dest[0] = '-';
	if (neg)
		nb = -nb;
	while (len--)
	{
		dest[len + neg] = (nb % 10) + '0';
		nb = nb / 10;
	}
	return (dest);
}

// int	main(void)
// {
// 	int		i;
// 	char	*str;

// 	i = -2147483648;
// 	str = ft_itoa(i);
// 	printf("%s", str);
// 	free(str);
// 	return (0);
// }
