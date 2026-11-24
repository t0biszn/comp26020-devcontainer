#include <stdio.h>

int main() {
    int int_size = sizeof(int);
    int double_size = sizeof(double);
    int ulli_size = sizeof(unsigned long long int);
    int mult_sizes = int_size*double_size*ulli_size;

    printf("%d\n", int_size);
    printf("%d\n", double_size);
    printf("%d\n", ulli_size);
    printf("%d\n", mult_sizes);

    return 0;

}