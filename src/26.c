#include <stdio.h>
void main() {
    int i = 0;
    while (i < 5) {
        if (i % 2 == 0) {
            printf("Even: %d\n", i);
        } else {
            printf("Odd: %d\n", i);
        }
        i++;
    }
}
