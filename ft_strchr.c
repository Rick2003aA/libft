/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rtsubuku <rtsubuku@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/16 15:28:01 by rtsubuku          #+#    #+#             */
/*   Updated: 2025/10/25 13:49:01 by rtsubuku         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strchr(const char *s, int c)
{
	const unsigned char	*uc;
	unsigned char		ch;

	ch = (unsigned char)c;
	uc = (const unsigned char *)s;
	while (*uc)
	{
		if (*uc == ch)
			return ((char *)uc);
		uc++;
	}
	if (ch == '\0')
		return ((char *)uc);
	return (NULL);
}

// #include <string.h>
// int	main(void)
// {
// 	char	str[] = "sigsegv";
// 	char	*p;

// 	p = ft_strchr(str, '\0');
// 	if (p)
// 	printf("find: %c / location: %ld / whole charcter: %s\n",*p, p - str, p);
// 	else
// 		printf("fail\n");
// 	return (0);
// }
