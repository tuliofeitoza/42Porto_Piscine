/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsilva-f <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/28 01:03:17 by tsilva-f          #+#    #+#             */
/*   Updated: 2024/01/28 01:06:18 by tsilva-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>//Inclui a biblioteca unistd.h, que contém declarações de funções para chamadas de sistema, como write.

void ft_putchar(char c);// Protótipo da função ft_putchar.

void ft_putchar(char c)// Definição da função ft_putchar que recebe um caractere como argumento.
{
	write(1, &c, 1);// Escreve o caractere c na saída padrão (normalmente o terminal).
}
