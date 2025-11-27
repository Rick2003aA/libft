/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rtsubuku <rtsubuku@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/16 16:38:12 by rtsubuku          #+#    #+#             */
/*   Updated: 2025/10/25 13:49:09 by rtsubuku         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*j;
	unsigned char	uc;

	uc = (unsigned char) c;
	j = (unsigned char *) s;
	i = 0;
	while (i < n)
	{
		if (*j == uc)
			return ((char *)j);
		i++;
		j++;
	}
	return (NULL);
}

// int	main(void)
// {
// 	char	arr[5] = "ABCDE";
// 	char	*p;

// 	p = ft_memchr(arr, 'A', 5);
// 	printf("index = %ld\n", p - arr);
// 	printf("addr = %p\n", (void *)p);
// }
