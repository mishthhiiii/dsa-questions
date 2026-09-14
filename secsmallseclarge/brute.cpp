// sort the array in ascending order and then print the index i and n - 2
#include <bits/stdc++.h>
using namespace std;
int main(){
   
    int arr[] = {1,2,3,4,5,6};
    int n =sizeof(arr)/sizeof(arr[0]);
   
    if(n==1 || n==2) return -1;
    sort (arr, arr + n);
    
    cout << "The second smallest element is: " << arr[1] << endl;
    cout << "The second largest element is: " << arr[n-2] << endl;
    return 0;
}