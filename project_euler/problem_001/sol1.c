/*
 * The problem is taken from https://projecteuler.net/problem=001
 * Copyright (C) 2021 Maxim Rebguns. Licensed under MIT. See the
 * LICENSE file for details. 
 *
 * Problem
 * =======
 * If we list all the natural numbers below 10 that are multiples
 * of 3 or 5, we get 3, 5, 6 and 9. The sum of these multiples is 23.
 * Find the sum of all the multiples of 3 or 5 below 1000.
 * 
 * Solution
 * ========
 * This solution iterates over all values from 1 to 1000. For each
 * value, it's added to the `sum` variable if it's a multiple of
 * 3 or 5. Modulo is used to determine whether it's a multiple, since
 * multiples of a number perfectly divide by it resulting in a remainer
 * of 0.
 */

#include <stdio.h>

/*
 * Get the sum of all multiples of 3 and 5 less than `max_num`.
 */
int solution(int max_num)
{
    int sum = 0;

    // Loop over all values and check if they are multiples of
    // 3 or 5. If so, add them to the cumulative sum.
    for (int i = 1; i < max_num; i++) {
        if (i % 3 == 0 || i % 5 == 0) {
            sum += i;
        }
    }

    return sum;
}

int main(void)
{
    printf("%d\n", solution(1000));
    return 0;
}
