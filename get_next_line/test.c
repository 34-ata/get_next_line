/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faata <faata@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 22:02:42 by buozcan           #+#    #+#             */
/*   Updated: 2023/10/25 21:02:54 by faata            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
#include <stdio.h>
#include <fcntl.h>

int	main(void)
{
	int		fd;
	char	*line;
	int		i;

	i = 0;
	line = NULL;
	fd = open ("test.txt", O_RDONLY);
	while (i++ < 155)
	{
		line = get_next_line(fd);
		printf("%s", line);
	}
	return (0);
}
