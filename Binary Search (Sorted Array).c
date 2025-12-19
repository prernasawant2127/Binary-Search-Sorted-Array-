//Binary Search (Sorted Array)

#include <stdio.h>

int main() {
    int a[] = {10, 20, 30, 40, 50};
    int low = 0, high = 4, key = 40;

    while (low <= high) {
        int mid = (low + high) / 2;

        if (a[mid] == key) {
            printf("Found at index %d", mid);
            return 0;
        }
        else if (a[mid] < key)
            low = mid + 1;
        else
            high = mid - 1;
    }
    printf("Not Found");
    return 0;
}
