#include <stdio.h>

// Ham sap xep noi bat (Bubble Sort)
void bubbleSort(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

// Ham tim kiem nhi phan (Binary Search)
int binarySearch(int arr[], int n, int target) {
    int left = 0, right = n - 1;
    while (left <= right) {
        int mid = left + (right - left) / 2;
        if (arr[mid] == target) {
            return mid; // Tra ve vi tri neu tim thay
        } else if (arr[mid] < target) {
            left = mid + 1; // Tim trong nua phai
        } else {
            right = mid - 1; // Tim trong nua trai
        }
    }
    return -1; // Khong tim thay
}

int main() {
    // Khoi tao va gan gia tri cho mang
    int arr[] = {34, 7, 23, 32, 5, 62};
    int n = sizeof(arr) / sizeof(arr[0]); // So luong phan tu trong mang

    printf("Mang ban dau:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    // Sap xep mang theo thu tu tang dan
    bubbleSort(arr, n);

    printf("Mang sau khi sap xep tang dan:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    // Yeu cau nguoi dung nhap mot so nguyen bat ki
    int target;
    printf("Nhap so nguyen can tim: ");
    scanf("%d", &target);

    // Tim kiem nhi phan
    int result = binarySearch(arr, n, target);
    if (result != -1) {
        printf("Phan tu %d duoc tim thay o vi tri %d (chi so bat dau tu 0).\n", target, result);
    } else {
        printf("Phan tu %d khong ton tai trong mang.\n", target);
    }

    return 0;
}

