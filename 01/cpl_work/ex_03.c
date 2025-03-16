#include <stdio.h>
#define MAX_N 100000

int main() {
    int count[10*MAX_N] = {0};
    int n = 0;
    int num = 0;

    scanf("%d", &n);
    int arr[2*n-1];

    for (int i = 0; i < 2*n-1; i++) {
        scanf("%d", &arr[i]);
    }

    for (int i = 0; i < 2*n-1; i++) {
        count[arr[i]]++;
    }

    for (int i = 0; i < 2*n-1; i++) {
        if (count[arr[i]] == 1) {
            printf("%d", arr[i]);
        }
    }
    printf("\n");
    return 0;
}