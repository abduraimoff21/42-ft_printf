/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dabdurai <dabdurai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/24 19:56:17 by dabdurai          #+#    #+#             */
/*   Updated: 2023/05/14 06:37:48 by dabdurai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putchar_fd(char c, int fd)
{
	if (fd < 1)
		return ;
	write(fd, &c, 1);
}
// void	ft_putchar_fd(char c, int fd)
// {
// 	if (fd < 1)
// 		return ;
// 	write(fd, &c, 1);
// }dfgfdgdf
ergerg
