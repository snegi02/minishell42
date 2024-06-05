/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: teichelm <teichelm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/30 12:35:14 by teichelm          #+#    #+#             */
/*   Updated: 2024/04/30 14:55:26 by teichelm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(const char *a)
{
	int	i;

	i = 0;
	if (!a)
		return (0);
	while (a[i] != '\0')
	{
		i++;
	}
	return (i);
}