#include<bits/stdc++.h>
using namespace std;

int sortARR(int arr[], int n){
    sort(arr, arr+n);
    return arr[0];
}
int main(){
    int arr[] = {2,5,1,3,0};
    int n = sizeof(arr)/sizeof(arr[0]);
    cout<<sortARR(arr,n)<<"is the smallest element in an array"<<endl;
    return 0;
}



//tc - o(n log n)
//sc o(1)
