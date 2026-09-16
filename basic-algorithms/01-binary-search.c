#include <stdio.h>

int main() {
    int nums[] = {1, 3, 5, 7, 9};
    int target = 7;
    int n = 5;

    int left = 0;
    int right = n - 1;

    while (left <= right) {
        int mid = left + (right - left) / 2;

        if (nums[mid] == target) {
            printf("%d\n", mid);
            return 0;
        } else if (nums[mid] < target) {
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }

    printf("-1\n");

    return 0;
}