/*
 * FizzBuzz: Iterate over numbers and for every number:
 * - If it's a multiple of 3, print "Fizz"
 * - If it's a multiple of 5, print "Buzz"
 * - If it's a multiple of both, print "FizzBuzz"
 * - If it's a multiple of none, print the number
 *
 * Copyright (C) 2021 Maxim Rebguns. Licensed under MIT. See the
 * LICENSE file for details. 
 */

#include <stdio.h>
#include <string.h>

void fizz_buzz(signed int max)
{
    for (int i = 1; i <= max; i++) {
        char message[9];

        // Initialize message so that strcat
        // can be used without runtime issues.
        message[0] = '\0';

        strcat(message, i % 3 == 0 ? "Fizz" : "");
        strcat(message, i % 5 == 0 ? "Buzz" : "");

        // Check if the string is empty. If it isn't,
        // then print it. Otherwise, print the number.
        if (message[0] != '\0')
            printf("%s\n", message);
        else
            printf("%d\n", i);
    }
}

int main(void)
{
    fizz_buzz(100);
    return 0;
}