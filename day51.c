// Write a Program to take a sorted array(say nums[]) and an integer (say target) as inputs. The elements in the sorted array might be repeated. You need to print the first and last occurrence of the target and print the index of first and last occurrence. Print -1, -1 if the target is not present.
#include <stdio.h>

int findFirstOccurrence(int nums[], int size, int target);
int findLastOccurrence(int nums[], int size, int target);

int main() {
    int n, target;

    printf("Enter the size of the array: ");
    scanf("%d", &n);

    int nums[n];
    printf("Enter the sorted array elements:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &nums[i]);
    }

    
    printf("Enter the target element: ");
    scanf("%d", &target);

    
    int firstIndex = findFirstOccurrence(nums, n, target);
    int lastIndex = findLastOccurrence(nums, n, target);

    
    printf("%d, %d\n", firstIndex, lastIndex);

    return 0;
}


int findFirstOccurrence(int nums[], int size, int target) {
    int start = 0;
    int end = size - 1;
    int result = -1;

    while (start <= end) {
        int mid = start + (end - start) / 2;

        if (nums[mid] == target) {
            result = mid;       // Record the index
            end = mid - 1;      // Keep searching on the left side
        } else if (nums[mid] < target) {
            start = mid + 1;
        } else {
            end = mid - 1;
        }
    }
    return result;
}


int findLastOccurrence(int nums[], int size, int target) {
    int start = 0;
    int end = size - 1;
    int result = -1;

    while (start <= end) {
        int mid = start + (end - start) / 2;

        if (nums[mid] == target) {
            result = mid;       // Record the index
            start = mid + 1;    // Keep searching on the right side
        } else if (nums[mid] < target) {
            start = mid + 1;
        } else {
            end = mid - 1;
        }
    }
    return result;
}
