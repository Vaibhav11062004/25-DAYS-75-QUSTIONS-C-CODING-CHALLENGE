#include <stdio.h>

int main() {
    int i;

    printf("Even numbers from 1 to 100 are:\n");

    for (i = 2; i <= 100; i += 2) {
        printf("%d ", i);
    }

    printf("\n");

    return 0;
}
