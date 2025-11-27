/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rtsubuku <rtsubuku@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/16 17:26:46 by rtsubuku          #+#    #+#             */
/*   Updated: 2025/10/25 13:49:07 by rtsubuku         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t				i;
	const unsigned char	*j;
	const unsigned char	*k;

	j = (const unsigned char *)s1;
	k = (const unsigned char *)s2;
	if (n == 0)
		return (0);
	i = 0;
	while (i < n)
	{
		if (j[i] != k[i])
			return (j[i] - k[i]);
		i++;
	}
	return (0);
}

// #include <string.h>
// int	main(void)
// {
// 	char	s[] = {-128, 0, 126, 0};
// 	char	scpy[] = {-128, 0, 127, 0};
// 	int		i;

// 	i = ft_memcmp(s, scpy, 0);
// 	printf("%d", i);
// 	return (0);
// }
