// section09.cs
// Copyright (c) 2023 Ishan Pranav. All rights reserved.
// Licensed under the MIT License.

#include <limits.h>
#include <stdio.h>

/**
 * Computes the first factorion greater than the given number.
 *
 * @param min the previous factorion from which to begin the search
 * @return The next factorion, or the given `min` if no such number exists
*/
static int getFactorionAbove(int min)
{
    for (int k = min + 1; k < INT_MAX; k++)
    {
        int sum = 0;
        int n = k;

        while (n)
        {
            int digit = n % 10;
            int factorial = 1;

            for (int i = 1; i <= digit; i++)
            {
                factorial *= i;
            }

            n /= 10;
            sum += factorial;
        }

        if (k == sum)
        {
            return k;
        }
    }

    return min;
}

/**
 * The main entry point for the application.
 *
 * @return An exit code.
*/
int main()
{
    printf("%d", getFactorionAbove(145));
    
    return 0;
}
