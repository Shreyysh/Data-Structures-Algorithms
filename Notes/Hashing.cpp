#include <bits/stdc++.h>
using namespace std;

void array_hashing() {
    int n, q, elt;
    cout << "enter size of array: ";
    cin >> n;
    int arr[n], hash[13] = {0}; //elt <=12 at max

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
        hash[arr[i]]++; //pre-storing count of all elements
    }

    cout << "Enter the number of elements you want to know count of: ";
    cin >> q;

    for (int i = 0; i < q; i++) {
        cout << "enter element: ";
        cin >> elt;
        cout << hash[elt] << endl; //fetching
    }
}

void hashmaps() {
    int n, q, elt;
    cout << "enter size of array: ";
    cin >> n;

    int arr[n];
    map<int,int> hash; // we can change this to unordered_map: 
    // time complexity will become O(1) in best and avg case but with a chance of collision.

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
        hash[arr[i]]++; //time complexity O(log n)
    }

    cout << "Enter the number of elements you want to know count of: ";
    cin >> q;

    for (int i = 0; i < q; i++) {
        cout << "enter element: ";
        cin >> elt;
        cout << hash[elt] << endl;
    }
}

int main(void) 
{
    array_hashing();
    cout << endl;
    hashmaps();
    return 0;
}