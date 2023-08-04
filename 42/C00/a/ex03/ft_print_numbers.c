/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gandre-d <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/26 14:44:44 by gandre-d          #+#    #+#             */
/*   Updated: 2023/07/26 19:07:57 by gandre-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_numbers(void)
{
	char	c;
	int		i;

	i = 0;
	while (i <= 9)
	{
		c = '0' + i;
		write(1, &c, 1);
		i++;
	}
}

/*int	main(void)
{
	ft_print_numbers();
	return (0);
}*/
