//Binary Search on an Array
#include <bits/stdc++.h>
using namespace std;

int BinarySearch(int arr[], int size, int elt);

int main(void)
{
    int arr[] = {1, 30, 33, 64, 69, 101};
    int n = sizeof(arr)/sizeof(arr[0]);

    int elt;
    cout << "Enter the Element to Search For: ";
    cin >> elt;

    cout << "\nSearching For.. " << elt << endl;

    int result = BinarySearch(arr, n, elt);
    if (result == -1) cout << "\nElement not found." << endl;
    else cout << "\nElement found at index " << result << endl;

    return 0;
}

int BinarySearch(int arr[], int size, int elt)
{
    int left = 0, right = size;
    for (int i = 0; i < size/2; i++) {
        int mid = (left+right)/2;
        if (arr[mid]==elt) return mid;
        if (arr[mid]>elt) {
            right = mid;
        } else {
            left = mid+1;
        }
    }
    return -1;
}