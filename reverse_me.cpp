/*
You are given a list of N integers and 
you need to reverse it and print the reversed 
list in a new line.
*/

#include <iostream>
using namespace std;

void reverseArray(int arr[], int start, int end) {
    int temp;
    if (start>=end)
        return;
    temp = arr[start];
    arr[start] = arr[end];
    arr[end] = temp;
    reverseArray(arr, start + 1, end - 1);
}

void printArray(int arr[], int size) {
    for (int i=0;i<size;i++) {
        cout<<arr[i]<<" ";
    }
    return;
}

int main() {
    int n;
    int ele;
    cin>>n;
    int arr[n];
    for (int i=0;i<n;i++) {
        cin>>ele;
        arr[i] = ele;
    }
    reverseArray(arr, 0, n-1);
    printArray(arr, n);

    return 0;
}