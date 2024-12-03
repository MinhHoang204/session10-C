#include <stdio.h>

int main() {
    // Khoi tao va gan gia tri cho mang
    int arr[] = {10, 20, 30, 40, 50};
    int n = sizeof(arr) / sizeof(arr[0]); // So luong phan tu trong mang
    int input, found = 0;

    // In cac phan tu cua mang
    printf("Cac phan tu trong mang la:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    // Nhap phan tu tu nguoi dung
    printf("Nhap phan tu can kiem tra: ");
    scanf("%d", &input);

    // Kiem tra xem phan tu co ton tai trong mang không
    for (int i = 0; i < n; i++) {
        if (arr[i] == input) {
            printf("Phan tu %d ton tai trong mang o vi tri %d (chi so bat dau tu 0).\n", input, i);
            found = 1;
            break;
        }
    }

    // Neu khong tim thay
    if (!found) {
        printf("Phan tu %d khong ton tai trong mang.\n", input);
    }

    return 0;
}

