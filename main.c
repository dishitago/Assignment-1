#include <stdio.h>
#include "mylib.h"
#include "arraylib.h"

int main(void) {
    int n;

    printf("Enter a number: ");
    scanf("%d", &n);

    if (isarmstrong(n))
        printf("%d is an Armstrong number.\n", n);
    else
        printf("%d is NOT an Armstrong number.\n", n);

    if (isadams(n))
        printf("%d is an Adams number.\n", n);
    else
        printf("%d is NOT an Adams number.\n", n);

    if (isprimepalindrome(n))
        printf("%d is a Prime Palindrome number.\n", n);
    else
        printf("%d is NOT a Prime Palindrome number.\n", n);

    printf("\n---- Array Operations ----\n");
    int a[] = {3, 1, 4, 1, 5};
    int size = 5;

    displayarray(a, size);
    printf("Max at index %d\n", findmaxindex(a, size));
    printf("Min at index %d\n", findminindex(a, size));
    printf("Average = %.2f\n", findaverage(a, size));

    reversearray(a, size);
    printf("Reversed -> ");
    displayarray(a, size);

    sortarray(a, size);
    printf("Sorted -> ");
    displayarray(a, size);

    int val = 4;
    int pos = linearsearch(a, size, val);
    if (pos != -1)
        printf("Value %d found at index %d\n", val, pos);
    else
        printf("Value %d not found in array.\n", val);

    return 0;
}
