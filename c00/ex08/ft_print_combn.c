/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yzheng <yzheng@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/29 18:19:20 by yzheng            #+#    #+#             */
/*   Updated: 2024/01/29 18:20:37 by yzheng           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void generate_combinations(int numbers[], int start, int depth, int n) {
    static int combination[10]; // Static array to hold current combination
    int i;

    // Base case: if combination size equals n, print it
    if (depth == n) {
        for (i = 0; i < n; i++) {
            printf("%d", combination[i]);
            if (i < n - 1) {
                printf(", ");
            }
        }
        printf("\n");
        return;
    }

    // Generate combinations recursively
    for (i = start; i < 10; i++) {
        combination[depth] = numbers[i];
        generate_combinations(numbers, i + 1, depth + 1, n);
    }
}
void print_combinations(int n) {
    int numbers[10];
    int i;

    // Initialize numbers array
    for (i = 0; i < 10; i++) {
        numbers[i] = i;
    }

    // Recursive function to generate combinations
    generate_combinations(numbers, 0, 0, n);
}
int main() {
    int n = 2; // Example usage with n = 2
    print_combinations(n);
    return 0;
}
