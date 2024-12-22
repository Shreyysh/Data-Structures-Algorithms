//Maximum Subarray Sum 

//Brute Force approach results in a time complexity of O(n^2)
// By using kadane's algo we get a time complexity of O(n) 

/*
The idea of Kadane’s algorithm is to traverse over the array from left to right and for each element, find the maximum sum among all subarrays ending at that element. The result will be the maximum of all these values. 

But, the main issue is how to calculate maximum sum among all the subarrays ending at an element in O(1) time?

To calculate the maximum sum of subarray ending at current element, say maxEnding, we can use the maximum sum ending at the previous element. So for any element, we have two choices:

Choice 1: Extend the maximum sum subarray ending at the previous element by adding the current element to it. If the maximum subarray sum ending at the previous index is positive, then it is always better to extend the subarray.
Choice 2: Start a new subarray starting from the current element. If the maximum subarray sum ending at the previous index is negative, it is always better to start a new subarray from the current element.

This means that maxEnding at index i = max(maxEnding at index (i – 1) + arr[i], arr[i]) and the maximum value of maxEnding at any index will be our answer. 
*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> arr = {-1,2,3,-4,5};

    int maxSum = arr[0];
    int maxEnding = arr[0];

    for (int st = 1; st < arr.size(); st++) {
        //deciding whether to start from curr index or prev subarr:
        maxEnding = max(maxEnding+arr[st], arr[st]);

        maxSum = max(maxEnding, maxSum);
    }

    cout << maxSum << endl;
    return 0;

}