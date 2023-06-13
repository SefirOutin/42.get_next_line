/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soutin <soutin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/24 19:07:46 by soutin            #+#    #+#             */
/*   Updated: 2023/06/01 16:40:53 by soutin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

size_t	ft_strlen(char *str)
{
	size_t	i;

	i = 0;
	if (!str)
		return (0);
	while (str[i])
		i++;
	return (i);
}

char	*ft_join(char *line, char *buffer)
{
	char	*new;
	int		i;

	i = 0;
	new = malloc((ft_strlen(line) + ft_strlen(buffer) + 1) * sizeof(char));
	if (!new || !buffer)
		return (NULL);
	if (line)
	{
		while (line[i])
		{
			new[i] = line[i];
			i++;
		}
	}
	while (*buffer)
	{
		new[i++] = *buffer;
		buffer++;
	}
	new[i] = '\0';
	if (line)
		free(line);
	return (new);
}
