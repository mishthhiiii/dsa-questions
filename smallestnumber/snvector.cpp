#include<bits/stdc++.h>
using namespace std;

int sortArr(int arr[], int n)
{
    sort(arr.begin(),arr.end());
    return arr[0];

}
int main (){
    vector<int> arr1 = {2,5,1,3,0};
    cout<< sortArr(arr1) << " " <<"is the smallest element in an array"<< endl;
    return 0;
    
    
}

//tc - o(n log n)
//sc - o(1)

