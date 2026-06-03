#include <stdio.h>

int main() {
    int start, end, num, i, isPrime;

    printf("Enter starting number: ");
    scanf("%d", &start);

    printf("Enter ending number: ");
    scanf("%d", &end);

    for (num = start; num <= end; num++) {

        if (num < 2)
            continue;

        isPrime = 1;

        for (i = 2; i < num; i++) {
            if (num % i == 0) {
                isPrime = 0;
                break;
            }
        }

        if (isPrime)
            printf("%d ", num);
    }

    return 0;
}