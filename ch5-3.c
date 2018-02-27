/* C Primer Plus
Chapter 5 Exercise 3:
Write a program that asks the user to enter the number of days and then converts
that value to weeks and days. For example, it would convert 18 days to 2 weeks,
4 days. Display results in the following format:
18 days are 2 weeks, 4 days.
Use a while loop to allow the user to repeatedly enter day values; terminate the
loop when the user enters a nonpositive value, such as 0 or -20. */

#include <stdio.h>

const int daysPerWeek = 7;

int main (void)

{
    int input;

    printf("Enter a number of days (or enter 0 or negtive numbers to quit): ");
    scanf("%d", &input);

    while (input > 0)
    {
        printf("%d days are %d weeks, %d days.\n", input, input/daysPerWeek,input%daysPerWeek );

        printf("Enter a number of days (or enter 0 to quit): ");
		scanf("%d", &input);

    }
    return 0;
}
