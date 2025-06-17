#include <stdio.h>

int main(void) {
float arr[10], x;
int i;
x =  100;
int y = sizeof(arr);
printf("%d\n", y);

    for (i = 1; i < 10; i++) { 
    arr[i] = arr[i - 1] / 2;
    printf("%f\n", arr[i]);
    }
}