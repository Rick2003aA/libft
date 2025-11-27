/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rtsubuku <rtsubuku@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/16 19:40:22 by rtsubuku          #+#    #+#             */
/*   Updated: 2025/10/25 13:43:48 by rtsubuku         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

static long int	ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}

static int	check(char str, char const *s2)
{
	while (*s2)
	{
		if (str == *s2)
			return (1);
		s2++;
	}
	return (0);
}

static void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t			i;
	unsigned char	*p;
	unsigned char	*q;

	i = 0;
	p = (unsigned char *) src;
	q = (unsigned char *) dest;
	while (i < n)
	{
		q[i] = p[i];
		i++;
	}
	return (q);
}

char	*ft_strtrim(char const *s1, char const *s2)
{
	char const	*start;
	char const	*end;
	char		*dest;
	size_t		len;

	start = s1;
	end = s1 + ft_strlen(s1);
	while (*start && check(*start, s2))
		start++;
	while (end > start && check(*(end - 1), s2))
		end--;
	len = (size_t)(end - start);
	dest = (char *)malloc(len + 1);
	if (!dest)
		return (NULL);
	ft_memcpy(dest, start, len);
	dest[len] = '\0';
	return (dest);
}

// int	main(void)
// {
// 	char	s1[] = "wowowohello worldwowowo";
// 	char	s2[] = "wo";
// 	char	*dest;

// 	dest = ft_strtrim(s1, s2);
// 	printf("%s", dest);
// 	free(dest);
// 	return (0);
// }
