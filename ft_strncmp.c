/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rtsubuku <rtsubuku@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/16 16:19:29 by rtsubuku          #+#    #+#             */
/*   Updated: 2025/10/25 13:48:53 by rtsubuku         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t				i;
	const unsigned char	*j;
	const unsigned char	*k;

	i = 0;
	j = (const unsigned char *)s1;
	k = (const unsigned char *)s2;
	while (i < n && (j[i] || k[i]))
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
// 	char	s1[] = "\0";
// 	char	s2[] = "\200";
// 	int		i;

// 	i = ft_strncmp(s1, s2, 2);
// 	printf("%d", i);
// 	return (0);
// }
