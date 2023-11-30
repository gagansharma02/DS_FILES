#include <stdio.h>

int SetIntersection(int a[], int b[], int m, int n) {
    int i = 0, j = 0, k = 0;
    int c[10];
    while (i < m && j < n) {
        if (a[i] < b[j]) {
            i++;
        } else if (b[j] < a[i]) {
            j++;
        } else {
            c[k] = a[i];
            i++;
            j++;
            k++;
        }
    }

    printf("Intersection of the two sets: ");
    for (i = 0; i < k; i++) {
        printf("%d ", c[i]);
    }
    printf("\n");
}

int main() {
    int a[10], b[10], m, n, i, j;

    printf("Enter the number of elements in the first set: ");
    scanf("%d", &m);

    printf("Enter the elements of the first set:\n");
    for (i = 0; i < m; i++) {
        scanf("%d", &a[i]);
    }

    printf("Enter the number of elements in the second set: ");
    scanf("%d", &n);

    printf("Enter the elements of the second set:\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &b[i]);
    }

    SetIntersection(a, b, m, n);

    return 0;
}
