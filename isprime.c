#include <stdio.h>
#include <math.h>

int main() {
    int n = 0;
    scanf("%d",&n);

    if (n <= 1) {
        printf("%d is not a prime number.\n", n);
    } else {
        int isPrime = 1; // Assume the number is prime
        for (int i = 2; i <= sqrt(n); i++) {
            if (n % i == 0) {
                isPrime = 0; // Number is not prime
                break;
            }
        }

        if (isPrime) {
            printf("%d is a prime number", n);
        } else {
            printf("%d is not a prime number", n);
        }
    }

    return 0;
}