/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rtsubuku <rtsubuku@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/16 12:54:40 by rtsubuku          #+#    #+#             */
/*   Updated: 2025/10/25 13:49:06 by rtsubuku         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char		*d;
	const unsigned char	*s;
	size_t				i;

	d = (unsigned char *)dest;
	s = (const unsigned char *)src;
	if (n == 0)
		return (dest);
	if (!d && !s)
		return (NULL);
	i = 0;
	while (i < n)
	{
		d[i] = s[i];
		i++;
	}
	return (dest);
}

// #include <string.h>
// int	main(void)
// {
// 	char	src[] = {0, 0};
// 	char	dest[100];
// 	int		i;

// 	memset(dest, 'A', 100);
// 	ft_memcpy(dest, src, 2);
// 	i = 0;
// 	while (i < 5)
// 	{
// 		printf("%d ", dest[i]);
// 		i++;
// 	}
// 	printf("%s", dest);
// 	return (0);
// }
