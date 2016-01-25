/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_freetab.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: udelorme <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/22 16:42:34 by udelorme          #+#    #+#             */
/*   Updated: 2016/01/22 16:48:01 by udelorme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

void	ft_freetab(char **tab)
{
	int i;

	i = -1;
	while (tab[++i] != 0)
		free(tab[i]);
	free(tab);
}