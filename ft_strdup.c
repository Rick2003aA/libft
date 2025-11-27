/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rtsubuku <rtsubuku@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/16 19:12:26 by rtsubuku          #+#    #+#             */
/*   Updated: 2025/10/25 13:48:12 by rtsubuku         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdup(const char *src)
{
	size_t		len;
	char		*dest;
	char		*src_copy;
	size_t		i;

	len = 0;
	src_copy = (char *)src;
	while (*src != '\0')
	{
		src++;
		len++;
	}
	dest = (char *)malloc(sizeof(char) * len + 1);
	if (!dest)
		return (NULL);
	i = 0;
	while (i < len)
	{
		dest[i] = src_copy[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

// int	main(void)
// {
// 	char	box[] = "aaaa";
// 	char	*arr;

// 	arr = ft_strdup(box);
// 	printf("%s", arr);
// 	free(arr);
// 	return (0);
// }
