// Copyright 2021 NNTU-CS

int binarySearchCount(int *arr, int size, int value) {
    int count = 0;
    int left = 0;
    int right = size - 1;
    while (left <= right) {
        int mid = left + (right - left) / 2;
        if (arr[mid] == value) {
            count++;
            int temp = mid;
            while (temp > left && arr[temp - 1] == value) {
                count++;
                temp--;
            }
            temp = mid;
            while (temp < right && arr[temp + 1] == value) {
                count++;
                temp++;
            }
            return count;
        }
        else if (arr[mid] < value) {
            left = mid + 1;
        }
        else {
            right = mid - 1;
        }
    }
    return count;
}
