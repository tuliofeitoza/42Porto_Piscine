/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsilva-f <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/29 22:59:44 by tsilva-f          #+#    #+#             */
/*   Updated: 2024/01/29 23:15:37 by tsilva-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

// Protótipo da função ft_strcmp
int ft_strcmp(char *s1, char *s2);

// Implementação da função ft_strcmp
int ft_strcmp(char *s1, char *s2)
{       
        int i = 0;

        // Compara os caracteres de s1 e s2 até encontrar um caractere diferente ou o final de ambas as strings
        while (s1[i] == s2[i] && (s1[i] != '\0' || s2[i] != '\0'))
        {
                i++;
        }
        
        // Retorna a diferença entre os caracteres que diferem em s1 e s2
        // Se s1 for lexicograficamente menor que s2, o resultado será negativo
        // Se s1 for lexicograficamente maior que s2, o resultado será positivo
        // Se s1 for igual a s2, o resultado será 0
        return (s1[i] - s2[i]);
}       

#include <stdio.h>

int main(void)
{
        // Testes para verificar a função ft_strcmp
        printf("%d", ft_strcmp("Hello", "Hello1")); // Deve imprimir um valor negativo
        printf("\n%d", ft_strcmp("Hello", "He"));   // Deve imprimir um valor positivo
        printf("\n%d", ft_strcmp("He", "Hello"));   // Deve imprimir um valor negativo
        printf("\n%d", ft_strcmp("Hello", "Hello")); // Deve imprimir 0, indicando igualdade
}
