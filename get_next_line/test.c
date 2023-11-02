/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faata <faata@student.42istanbul.com.tr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 22:02:42 by faata	           #+#    #+#             */
/*   Updated: 2023/10/30 17:01:45 by faata            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line_bonus.h"
#include <stdio.h>
#include <fcntl.h>

int	main(void)
{
	int	fd;
	int	fd1;
	int	fd2;

	fd = open("test.txt", O_RDONLY);
	fd1 = open("test1.txt", O_RDONLY);
	fd2 = open("test2.txt", O_RDONLY);
	printf("fd = %s", get_next_line(fd));
	printf("fd1 = %s", get_next_line(fd1));
	printf("fd = %s", get_next_line(fd));
	printf("fd1 = %s", get_next_line(fd1));
	printf("fd2 = %s", get_next_line(fd2));
	close (fd);
	close (fd1);
	close (fd2);
}
