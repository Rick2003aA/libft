/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rtsubuku <rtsubuku@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/16 09:32:49 by rtsubuku          #+#    #+#             */
/*   Updated: 2025/10/25 13:48:12 by rtsubuku         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
		return (1024);
	else
		return (0);
}

// // #include <ctype.h>
// int	main(void)
// {
// 	printf("ft version\n");
// 	printf("%d\n", ft_isalpha('a'));
// 	printf("%d\n", ft_isalpha('-'));
// 	printf("original versio\n");
// 	printf("%d\n", isalpha('a'));
// 	printf("%d\n", isalpha('-'));
// 	return (0);
// }
