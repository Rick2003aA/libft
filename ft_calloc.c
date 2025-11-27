/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rtsubuku <rtsubuku@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/17 10:03:55 by rtsubuku          #+#    #+#             */
/*   Updated: 2025/10/28 13:07:32 by rtsubuku         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdint.h>

void	*ft_calloc(size_t nmemb, size_t size)
{
	void			*arr;
	size_t			i;
	unsigned char	*p;

	if (size != 0 && nmemb == SIZE_MAX / size)
		return (NULL);
	arr = malloc(size * nmemb);
	if (!arr)
		return (NULL);
	i = 0;
	p = (unsigned char *)arr;
	while (i < nmemb * size)
	{
		p[i] = 0;
		i++;
	}
	return (arr);
}

// #include <string.h>
// #include <stdio.h>
// int	main(void)
// {
// 	char	*s;
// 	int		i;

// 	s = ft_calloc(10, 1);
// 	i = 0;
// 	while (i < 10)
// 	{
// 		printf("%d", s[i]);
// 		i++;
// 	}
// 	printf("\n");
// 	free(s);
// 	return (0);
// }