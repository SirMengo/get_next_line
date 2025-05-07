/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msimoes <msimoes@student.42lisboa.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/06 14:01:48 by msimoes           #+#    #+#             */
/*   Updated: 2025/05/07 11:32:26 by msimoes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char *get_next_line(int fd)
{
	static char buffer[BUFFER_SIZE];
	char * line;

	fd = open("file.txt", O_RDONLY | O_CREAT);
	
	printf("ABCD %d", fd);
	// while (read(fd, buffer, BUFFER_SIZE))
	// {
	// 	line = ft_strjoin(line, buffer[BUFFER_SIZE]);
	// }
	sleep(1000);
}