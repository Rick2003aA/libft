/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rtsubuku <rtsubuku@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/16 16:07:28 by rtsubuku          #+#    #+#             */
/*   Updated: 2025/10/28 13:22:48 by rtsubuku         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strrchr(const char *s, int c)
{
	const unsigned char				*uc;
	unsigned char					ch;
	const unsigned char				*start;

	uc = (const unsigned char *)s;
	ch = (unsigned char)c;
	start = (const unsigned char *)s;
	while (*uc)
		uc++;
	while (1)
	{
		if (*uc == ch)
			return ((char *)uc);
		if (uc == start)
			break ;
		uc--;
	}
	return (NULL);
}

// #include <string.h>
// int	main(void)
// {
// 	char	str[] = "abc";
// 	char	*p;

// 	p = ft_strrchr(str, 'a');
// 	if (p)
// 	printf("find: %c / location: %ld / whole charcter: %s\n",*p, p - str, p);
// 	else
// 		printf("fail\n");
// 	return (0);
// }