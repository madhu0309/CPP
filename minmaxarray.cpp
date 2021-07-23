/*
Write a C function to return minimum and maximum 
in an array. Your program should make the minimum 
number of comparisons. 
*/
#include <iostream>
using namespace std;


// int main() {
//     int arr[] = {1, 2, 3, 4, 5};
//     int size = sizeof(arr)/sizeof(arr[0]);
//     int min=arr[0];
//     int max=arr[0];
//     for (int i=0; i<size; i++) {
//         if (arr[i] < min) {
//             min = arr[i];
//         }
//         if (arr[i] > max) {
//             max = arr[i];
//         }
//     }
//     cout << min <<" "<< max << endl;

//     return 0;
// }

struct Pair
{
    int min;
    int max;
};

struct Pair getMinMax(int arr[], int n)
{
    struct Pair minmax;
    int i;

    // If there is only one element
    // then return it as min and max both
    if (n==1)
    {
        minmax.max = arr[0];
        minmax.min = arr[0];
        return minmax;
    }

    if 
}

int main() {
    int arr[] = { 1000, 11, 445, 1, 330, 3000 };
    int arr_size = 6;

    struct Pair minmax = getMinMax(arr, arr_size);

    cout << "Minimum element is "<< minmax.
}