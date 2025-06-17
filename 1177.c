#include <stdio.h>

int main() {
    int T = 3;
    int N[1000];

    for (int i = 0; i < 1000; i++) {
        N[i] = i % T;  // Repete de 0 até T-1
    }

    for (int i = 0; i < 1000; i++) {
        printf("N[%d] = %d\n", i, N[i]);
    }

    return 0;
}

