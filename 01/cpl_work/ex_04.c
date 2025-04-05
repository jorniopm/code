//
// Created by wangjiacheng on 25-3-16.
//
#include <stdio.h>
#define MAX_S 100000
int main() {
    int n = 0;
    scanf("%d", &n);
    int arr[MAX_S+1];
    int t = 0;
    int standing = 0;

    for (int i = 0; i <= n; i++) {
        scanf ("%d", &arr[i]);
    }

    for (int i = 0; i <= n; i++) {
        if (standing - i < 0) {
            int need = i - standing;
            t += need;
            standing += need;
        }
        standing += arr[i];
    }
    printf ("%d", t);
    return 0;
}
