// section03.cs
// Copyright (c) 2023 Ishan Pranav. All rights reserved.
// Licensed under the MIT License.

#include <limits.h>
#include <stdio.h>

/**
 * Computes the first perfect number greater than the given number.
 * 
 * @param min the previous perfect number from which to begin the search
 * @return The next perfect number, or the given `min` if no such number exists
*/
static int getPerfectAbove(int min)
{
    for (int value = min + 1; value < INT_MAX; value++)
    {
        int sum = 0;
        
        for (int factor = 1; factor < value; factor++)
        {
            if (value % factor == 0)
            {
                sum += factor;   
            }
        }
        
        if (value == sum)
        {
            return value;
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
    printf("%d", getPerfectAbove(28));
    
    return 0;
}
