/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rtsubuku <rtsubuku@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/16 14:50:23 by rtsubuku          #+#    #+#             */
/*   Updated: 2025/10/25 13:48:29 by rtsubuku         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

static size_t	count(const char	*s, size_t max)
{
	size_t	i;

	i = 0;
	while (i < max && s[i])
		i++;
	return (i);
}

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	dest_len;
	size_t	src_len;

	dest_len = count(dst, size);
	src_len = 0;
	while (src[src_len])
		src_len++;
	if (dest_len >= size)
		return (size + src_len);
	i = 0;
	while (src[i] && dest_len + 1 + i < size)
	{
		dst[dest_len + i] = src[i];
		i++;
	}
	dst[dest_len + i] = '\0';
	return (dest_len + src_len);
}

// int	main(void)
// {
// 	char				dest[] = "123456789";
// 	char				src[] = "123456789";
// 	size_t				size = 3;
// 	size_t				result = ft_strlcat(dest, src, size);

// 	printf("dest: %s\n", dest);
// 	printf("%zu", result);
// 	return (0);
// }
