/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rtsubuku <rtsubuku@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/16 11:36:52 by rtsubuku          #+#    #+#             */
/*   Updated: 2025/10/25 13:49:03 by rtsubuku         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	*ft_memset(void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*p;

	i = 0;
	p = (unsigned char *) s;
	while (i < n)
	{
		p[i] = c;
		i++;
	}
	return (s);
}

// #include <string.h>
// int	main(void)
// {
// 	char	s[11];
// 	char	s2[11];

// 	ft_memset(s, 'A', 10);
// 	s[10] = '\0';
// 	printf("%s\n", s);
// 	memset(s2, 'B', 10);
// 	s2[10] = '\0';
// 	printf("%s\n", s2);
// 	return (0);
// }
