#include <stdio.h>

void linearSearch(int arr[], int n, int target) {
    int positions[n]; // Mang luu cac vi tri tim duoc
    int count = 0; // Ðem so lan xuat hien cua target trong mang

    // Duyet qua mang de tim kiem
    for (int i = 0; i < n; i++) {
        if (arr[i] == target) {
            positions[count] = i; // Luu vi tri vao mang positions
            count++;
        }
    }

    // Kiem tra va in cac vi tri neu tim thay
    if (count > 0) {
        printf("Phan tu %d duoc tim thay o vi tri: ", target);
        for (int i = 0; i < count; i++) {
            printf("%d ", positions[i]);
        }
        printf("\n");
    } else {
        printf("Phan tu %d khong ton tai trong mang.\n", target);
    }
}

int main() {
    // Khoi tao va gan gia tri cho mang
    int arr[] = {10, 25, 30, 25, 50, 25, 70};
    int n = sizeof(arr) / sizeof(arr[0]); // So luong phan tu trong mang

    printf("Mang ban dau:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    // Yeu cau nguoi dung nhap mot so nguyen bat ki
    int target;
    printf("Nhap so nguyen can tim: ");
    scanf("%d", &target);

    // Tim kiem tuyen tinh
    linearSearch(arr, n, target);

    return 0;
}

