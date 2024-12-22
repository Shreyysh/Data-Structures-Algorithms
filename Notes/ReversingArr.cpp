#include <bits/stdc++.h>
using namespace std;

//two pointer approach
void arrReverse(int arr[], int n) {
    int start = 0, end = n-1;
    
    while (start < end) {
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;

        start++;
        end--;
    }
}

int main(void)
{
    int arr[] = {10, 4, 21, 6, 20};
    int size = sizeof(arr)/sizeof(arr[0]);

    arrReverse(arr, size);
    for (int i=0; i<size; i++) cout << arr[i] << " ";

    return 0;
}