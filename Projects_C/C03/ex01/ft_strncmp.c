/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsilva-f <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/29 23:18:16 by tsilva-f          #+#    #+#             */
/*   Updated: 2024/01/29 23:24:52 by tsilva-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

// Protótipo da função ft_strncmp
int ft_strncmp(char *s1, char *s2, unsigned int n);

// Implementação da função ft_strncmp
int ft_strncmp(char *s1, char *s2, unsigned int n)
{       
    int i = 0;

    // Compara os caracteres de s1 e s2 até atingir n caracteres ou o final de uma das strings
    while (i < n && (s1[i] != '\0' || s2[i] != '\0'))
    {
        // Verifica se o caractere atual de s1 é maior que o de s2
        if (s1[i] > s2[i])
            return 1; // Retorna 1, indicando que s1 é lexicograficamente maior que s2
        
        // Verifica se o caractere atual de s1 é menor que o de s2
        else if (s1[i] < s2[i])
            return -1; // Retorna -1, indicando que s1 é lexicograficamente menor que s2
        
        i++; // Incrementa o índice para comparar o próximo caractere
    }

    // Se n caracteres foram comparados e ainda não houve diferença, ou ambos os caracteres são nulos,
    // ou uma das strings foi completamente comparada até o final
    return 0; // Retorna 0, indicando que as strings são iguais até o comprimento especificado n
}       

#include <stdio.h>

int main(void)
{
    // Teste para verificar a função ft_strncmp
    printf("%d", ft_strncmp("Hello", "HelloWorld", 8)); // Deve imprimir um valor negativo
}
