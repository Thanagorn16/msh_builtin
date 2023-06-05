/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cd.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: truangsi <truangsi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/05 13:57:27 by truangsi          #+#    #+#             */
/*   Updated: 2023/06/05 15:35:57 by truangsi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "builtin.h"

// int	change_dir(char **av)
// {
// 	DIR				*dir;
// 	struct dirent	entry;
// 	const char 		*target_dir;

// 	target_dir = av[2]; // should be changed later
// 	dir = opendir(target_dir);
// 	if (dir == NULL)
// 	{
// 		perror("error opendir");
// 		return (EXIT_FAILURE);
// 	}
// 	printf("success");
// 	return (EXIT_SUCCESS);
// }

int	change_dir(char **av)
{
	int		ch;
	char	cwd[256];

	ch = chdir(av[2]); //change the cwd (current working dir)
	if (ch < 0)
	{
		perror("error");
		return (EXIT_FAILURE);
	}
	printf("change success\n");
	// if (getcwd(cwd, sizeof (cwd)) == NULL) //check if the cwd is really changed
	// {
	// 	perror("error");
	// 	return (EXIT_FAILURE);
	// }
	// printf("currently at: %s\n", cwd); //!can be deleted later
	return (EXIT_SUCCESS);
}

int	main(int ac, char **av)
{
	if (change_dir(av) > 0)
		return (EXIT_FAILURE);
	return (0);
}