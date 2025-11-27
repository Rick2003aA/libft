/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rtsubuku <rtsubuku@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/19 12:34:47 by rtsubuku          #+#    #+#             */
/*   Updated: 2025/10/25 13:48:12 by rtsubuku         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

static size_t	count_words(const char *s, char c)
{
	int		flag;
	size_t	count;

	flag = 1;
	count = 0;
	while (*s)
	{
		if (*s == c)
			flag = 1;
		else if (flag == 1)
		{
			count++;
			flag = 0;
		}
		s++;
	}
	return (count);
}

static char	*copy_word(const char *s, char c)
{
	size_t	i;
	size_t	len;
	char	*dest;

	len = 0;
	while (s[len] && s[len] != c)
		len++;
	dest = (char *)malloc(len + 1);
	if (!dest)
		return (NULL);
	i = 0;
	while (s[i] && s[i] != c)
	{
		dest[i] = s[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

static void	free_all(char **arr, size_t n)
{
	while (n > 0)
		free(arr[n--]);
	free(arr);
}

static int	put_words(const char *s, char c, char **dest)
{
	size_t	i;
	char	*str;

	i = 0;
	while (*s)
	{
		while (*s == c)
			s++;
		if (!*s)
			break ;
		str = copy_word(s, c);
		if (!str)
		{
			free_all(dest, i);
			return (0);
		}
		dest[i] = str;
		while (*s && *s != c)
			s++;
		i++;
	}
	dest[i] = NULL;
	return (1);
}

char	**ft_split(char const *s, char c)
{
	size_t	word_count;
	char	**dest;

	word_count = count_words(s, c);
	dest = malloc(sizeof(char *) * (word_count + 1));
	if (!dest)
		return (NULL);
	if (!put_words(s, c, dest))
		return (NULL);
	return (dest);
}

// int	main(void)
// {
// 	char	**arr2 = ft_split("Hello world  42 Tokyo", ' ');
// 	size_t	i = 0;

// 	while (arr2[i])
// 	{
// 		printf("[%zu] %s\n", i, arr2[i]);
// 		i++;
// 	}
// 	i = 0;
// 	while (arr2[i])
// 		free(arr2[i++]);
// 	free(arr2);
// 	return (0);
// }