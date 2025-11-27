/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rtsubuku <rtsubuku@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/16 19:31:07 by rtsubuku          #+#    #+#             */
/*   Updated: 2025/10/25 13:43:34 by rtsubuku         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

static size_t	ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}

static size_t	any_len(char const *s, unsigned int start, size_t len)
{
	size_t	slen;

	slen = ft_strlen(s);
	if (start >= slen)
		return (0);
	if (len > slen - start)
		return (slen - start);
	return (len);
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	n;
	size_t	i;
	char	*arr;

	if (!s)
		return (NULL);
	n = any_len(s, start, len);
	arr = malloc(n + 1);
	if (!arr)
		return (NULL);
	i = 0;
	while (i < n)
	{
		arr[i] = s[start + i];
		i++;
	}
	arr[i] = '\0';
	return (arr);
}

// #include <string.h>
// int	main(void)
// {
// 	char	arr[] = "Hello world";
// 	char	*arr2;

// 	arr2 = ft_substr(arr, 6, 5);
// 	printf("%s\n", arr2);
// 	free(arr2);
// 	return (0);
// }
