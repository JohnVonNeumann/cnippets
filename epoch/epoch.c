#include <time.h>
#include <stdio.h>

int main() {
    double lol;
    time_t t1;
    lol = time(&t1);
    printf("%f\n", lol);

    return 0;

}

