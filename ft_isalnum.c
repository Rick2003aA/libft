/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rtsubuku <rtsubuku@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/16 09:32:49 by rtsubuku          #+#    #+#             */
/*   Updated: 2025/10/25 13:48:12 by rtsubuku         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isalnum(int c)
{
	if (((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		|| (c >= '0' && c <= '9'))
		return (8);
	else
		return (0);
}

// // #include <ctype.h>
// int	main(void)
// {
// 	printf("ft version\n");
// 	printf("%d\n", ft_isalnum('a'));
// 	printf("%d\n", ft_isalnum('7'));
// 	printf("%d\n", ft_isalnum('-'));
// 	printf("original versio\n");
// 	printf("%d\n", isalnum('a'));
// 	printf("%d\n", isalnum('7'));
// 	printf("%d\n", isalnum('-'));
// 	return (0);
// }
