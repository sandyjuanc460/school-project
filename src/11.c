#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    srand(time(NULL));
    int rand_num = rand() % 10 + 1;
    printf("Random number: %d\n", rand_num);
    return 0;
}
