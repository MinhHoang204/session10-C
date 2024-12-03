#include <stdio.h>

// Ham sap xep noi bot (Bubble Sort) cho tung cot
void sortColumn(int arr[][100], int rows, int colIndex) {
    for (int i = 0; i < rows - 1; i++) {
        for (int j = 0; j < rows - i - 1; j++) {
            if (arr[j][colIndex] > arr[j + 1][colIndex]) {
                int temp = arr[j][colIndex];
                arr[j][colIndex] = arr[j + 1][colIndex];
                arr[j + 1][colIndex] = temp;
            }
        }
    }
}

int main() {
    int n, m;

    // Nhap so dong va so cot
    printf("Nhap so dong (n): ");
    scanf("%d", &n);
    printf("Nhap so cot (m): ");
    scanf("%d", &m);

    // Khai bao mang va nhap gia tri
    int arr[100][100];
    printf("Nhap cac phan tu cua mang:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            printf("arr[%d][%d] = ", i, j);
            scanf("%d", &arr[i][j]);
        }
    }

    // Sap xep cac phan tu theo tung cot
    for (int j = 0; j < m; j++) {
        sortColumn(arr, n, j);
    }

    // In mang sau khi sap xep
    printf("Ma tran sau khi sap xep tang dan theo tung cot:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }

    return 0;
}

