#include <stdio.h>
#include <math.h>
#include "mylib.h"

// #Cp — Custom work

int revdig(int n) { // Helper function to reverse digits
    int r = 0;
    while (n) {
        r = r * 10 + (n % 10);
        n /= 10;
    }
    return r;
}

int isarmstrong(int num) { // Check Armstrong no.
    int temp = num, sum = 0, count = 0;

    while (temp != 0) {
        count++;
        temp /= 10;
    }

    temp = num;
    while (temp != 0) {
        int digit = temp % 10;
        sum += pow(digit, count);
        temp /= 10;
    }

    return (sum == num);
}

int isadams(int num) { // Check Adams number
    int sq = num * num;
    int rev = revdig(num);
    int revsq = rev * rev;

    return (revdig(sq) == revsq);
}

int isprime(int n) { // Check if a number is prime
    if (n <= 1)
        return 0;
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0)
            return 0;
    }
    return 1;
}

int isprimepalindrome(int num) {// Check Prime Palindrome
    return (isprime(num) && num == revdig(num));
}
