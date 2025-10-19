#include "arraylib.h"
#include <stdio.h>

int findmaxindex(int arr[], int size) {
    if (size <= 0) return -1; // handle empty array
    int maxindex = 0;
    for (int i = 1; i < size; i++) {
        if (arr[i] > arr[maxindex]) {
            maxindex = i;
        }
    }
    return maxindex;
}

int findminindex(int arr[], int size) {
    if (size <= 0) return -1;
    int minindex = 0;
    for (int i = 1; i < size; i++) {
        if (arr[i] < arr[minindex]) {
            minindex = i;
        }
    }
    return minindex;
}

float findaverage (int arr[], int size) {
    if (size <= 0) return 0.0f;
    long long sum = 0; 
    for (int i = 0; i < size; i++) {
        sum += arr[i];
    }
    return (float)sum / size;
}

void reversearray(int arr[], int size) {
    for (int i = 0; i < size / 2; i++) {
        int temp = arr[i];
        arr[i] = arr[size - i - 1];
        arr[size - i - 1] = temp;
    }
}

void sortarray(int arr[], int size) {
    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int linearsearch(int arr[], int size, int value) {
    for (int i = 0; i < size; i++) {
        if (arr[i] == value)
            return i;
    }
    return -1;
}

