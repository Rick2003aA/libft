/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rtsubuku <rtsubuku@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/16 10:42:20 by rtsubuku          #+#    #+#             */
/*   Updated: 2025/10/25 13:48:12 by rtsubuku         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isprint(int c)
{
	if (!(c >= 32 && c <= 126))
		return (0);
	else
		return (16384);
}
// // #include <ctype.h>

// int	main(void)
// {
// 	printf("ft version\n");
// 	printf("%d\n", ft_isprint(' '));
// 	printf("%d\n", ft_isprint('@'));
// 	printf("%d\n", ft_isprint('\n'));
// 	printf("original versio\n");
// 	printf("%d\n", isprint(' '));
// 	printf("%d\n", isprint('@'));
// 	printf("%d\n", isprint('\n'));
// 	return (0);
// }
