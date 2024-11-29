#include <stdio.h>
int main() {
    int k[5] = {1, 2, 3, 4, 5};
    int length = sizeof(k) / sizeof(k[0]);
    printf("Cac phan tu cua mang tu cuoi ve dau : %d");
    for (int i = length - 1; i >= 0; i--) {
        printf("k[%d] = %d\n", i, k[i]);
    }
    return 0;
}
