/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcorte-r <bcorte-r@student.42london.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 09:29:25 by bcorte-r          #+#    #+#             */
/*   Updated: 2023/11/01 09:30:28 by bcorte-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


int	ft_isprint(int i)
{
	if (i >= 32 && i <= 127)
		return (1);
	return (0);
}