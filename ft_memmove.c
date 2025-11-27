/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rtsubuku <rtsubuku@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/19 13:56:36 by rtsubuku          #+#    #+#             */
/*   Updated: 2025/10/25 13:49:05 by rtsubuku         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*memmove2(char *d, char *s, size_t n)
{
	size_t	i;

	i = n;
	if (d > s && d < s + i)
	{
		while (i > 0)
		{
			i--;
			d[i] = s[i];
		}
	}
	else
	{
		i = 0;
		while (i < n)
		{
			d[i] = s[i];
			i++;
		}
	}
	return (d);
}

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char		*d;
	const unsigned char	*s;

	d = (unsigned char *)dest;
	s = (const unsigned char *)src;
	if (dest == NULL && src == NULL)
		return (NULL);
	if (n == 0 || src == dest)
		return (dest);
	memmove2((char *)d, (char *)s, n);
	return (dest);
}

// #include <string.h>
// int	main(void)
// {
// 	char	buf[] = "abcdef";
// 	char	buff[] = "abcdef";

// 	ft_memmove(buf + 2, buf, 3);
// 	printf("%s\n", buf);
// 	memmove(buff + 2, buff, 3);
// 	printf("%s", buff);
// 	return (0);
// }
