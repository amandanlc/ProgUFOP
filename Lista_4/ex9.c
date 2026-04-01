#include <stdio.h>

int retira(int arr[], int n) {
    if (n == 0 || n == 1) return n;

    int j = 0;

    for (int i = 0; i < n - 1; i++) {
        if (arr[i] != arr[i + 1]) {
            arr[j++] = arr[i];
        }
    }

    arr[j++] = arr[n - 1];

    return j;
}

int main() {
    int n;

    printf("Type how many numbers will you enter: ");
    scanf("%d", &n);

    if (n <= 0) return 0;

    int vet[n];

    for (int i = 0; i < n; i++) {
        printf("Number %d: ", i + 1);
        scanf("%d", &vet[i]);
    }

    int newSize = retira(vet, n);

    printf("\nArray after removing consecutive duplicates: ");
    for (int i = 0; i < newSize; i++) {
        printf("%d ", vet[i]);
    }
    
    printf("\nNew total of variables: %d\n", newSize);

    return 0;
}