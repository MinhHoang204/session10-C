#include <stdio.h>

void insertionSort(int arr[], int n) {
    for (int i = 1; i < n; i++) {
        int key = arr[i]; // Phan tu hien tai can sap xep
        int j = i - 1;

        // Dich chuyen cac phan tu lon hon key sang phai
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j--;
        }

        // Dat key vao vi tri thich hop
        arr[j + 1] = key;
    }
}

int main() {
    // Khoi tao va gan gia tri cho mang
    int arr[] = {29, 10, 14, 37, 14, 3, 18};
    int n = sizeof(arr) / sizeof(arr[0]); // So luong phan tu trong mang

    printf("Mang ban dau:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    // Sap xep mang theo thu tu tang dan bang insertion sort
    insertionSort(arr, n);

    printf("Mang sau khi sap xep tang dan:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}

