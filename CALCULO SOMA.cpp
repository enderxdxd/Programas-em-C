#include <stdio.h>

int main() {
    float S = 0;
    int N1, N2;

    for (N1 = 1, N2 = 1; N1 <= 99; N1 += 2, N2++) {
        S += (float) N1 / N2;
    }

    printf("O valor de S e: %f\n", S);

    return 0;
}

