/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmarckma <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/24 19:46:31 by fmarckma          #+#    #+#             */
/*   Updated: 2019/07/24 21:54:49 by fmarckma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int		is_space(char c)
{
	if  (c == ' ')
	{
		return (1);
	}
	return (0);
}

int		count_words(char *str)
{
	int i;
	int nb;

	i = 0;
	nb = 0;
	while (str[i])
	{
		if (!(is_space(str[i])) && is_space(str[i - 1]))
			nb++;
		i++;
	}
	return (nb);
}

int		fill_it(char *str, char **tab)
{
		
}

char	**ft_split(char *str)
{
	int i;
	int nb_words;
   	char **tab;

	i = 0;
	nb_words = count_words(str);
	if (!(tab = malloc(sizeof(*tab) * (nb_words + 1)))
		return (NULL);
	while (i < nb_words)
}

int		main(int ac, char **av)
{
	
}
