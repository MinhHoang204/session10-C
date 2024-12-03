#include <stdio.h>

// Ham sap xep noi bat (Bubble Sort) cho tung dong
void sortRow(int row[], int cols) {
    for (int i = 0; i < cols - 1; i++) {
        for (int j = 0; j < cols - i - 1; j++) {
            if (row[j] > row[j + 1]) {
                int temp = row[j];
                row[j] = row[j + 1];
                row[j + 1] = temp;
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

    // Khai bao va nhap gia tri mang 2 chieu
    int arr[n][m];
    printf("Nhap cac phan tu cua mang:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            printf("arr[%d][%d] = ", i, j);
            scanf("%d", &arr[i][j]);
        }
    }

    // Sap xep tung dong trong mang
    for (int i = 0; i < n; i++) {
        sortRow(arr[i], m);
    }

    // In mang sau khi sap xep
    printf("Ma tran sau khi sap xep tang dan theo tung dong:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }

    return 0;
}

