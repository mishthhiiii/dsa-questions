#include <bits/stdc++.h>
using namespace std;

int sortArr(vector<int> &arr)
{
    int n = arr.size();
    sort(arr.begin(), arr.end());
    return arr[n-1];   // smallest element
}

int main()
{
    vector<int> arr1 = {2, 5, 1, 3, 0};

    cout << sortArr(arr1) << " is the smallest element in an array" << endl;

    return 0;
}

// TC: O(n log n)
// SC: O(1) (ignoring sorting stack usage)