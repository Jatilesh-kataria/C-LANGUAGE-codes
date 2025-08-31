#include<stdio.h>
int main()
{
    int reverse, x = 0, d = 0, loop = 4,y;

    printf("Enter any 4-digit number: ");
    scanf("%4d", &reverse);
    y=reverse;

    while (loop >= 1)
    {
        x = reverse % 10;      // Extract the last digit
        reverse = reverse / 10; // Remove the last digit
        d = d * 10 + x;        // Build the reversed number
        loop--;                // Decrement the loop counter
    }
    printf("Reversed number: %d\n", d);
    if(d==y)
    printf("Palindrome");
    else
    printf("No Palindrome");
    return 0;
}