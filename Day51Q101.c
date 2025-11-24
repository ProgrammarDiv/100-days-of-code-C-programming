#include <stdio.h>

int findFirstOccurrence(int nums[], int size, int target) {
    int low = 0, high = size - 1, result = -1;
    while (low <= high) {
        int mid = low + (high - low) / 2;
        if (nums[mid] == target) {
            result = mid;
            high = mid - 1;  
        } else if (nums[mid] < target) {
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }
    return result;
}

int findLastOccurrence(int nums[], int size, int target) {
    int low = 0, high = size - 1, result = -1;
    while (low <= high) {
        int mid = low + (high - low) / 2;
        if (nums[mid] == target) {
            result = mid;
            low = mid + 1;  
        } else if (nums[mid] < target) {
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }
    return result;
}

int main() {
    int size, target;
    printf("Enter size of sorted array: ");
    scanf("%d", &size);
    int nums[size];
    printf("Enter elements of sorted array:\n");
    for (int i = 0; i < size; i++) {
        scanf("%d", &nums[i]);
    }
    printf("Enter target element: ");
    scanf("%d", &target);
    int first = findFirstOccurrence(nums, size, target);
    int last = findLastOccurrence(nums, size, target);
    if (first == -1 || last == -1) {
        printf("-1 -1\n");
    } else {
        printf("First occurrence index = %d\n", first);
        printf("Last occurrence index = %d\n", last);
    }
    return 0;
}
