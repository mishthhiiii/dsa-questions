#include <bits/stdc++.h>
using namespace std;

int getelement(int arr[], int n){

    if(n==1 || n==2) {
        cout << -1 << endl;
    }

    int smallest = INT_MAX;
    int second_smallest = INT_MAX;
    int largest = INT_MIN;
    int second_largest = INT_MIN;
   


    for(int i=0; i<n; i++){
        if(arr[i] < smallest){
            smallest = arr[i];
        }
        if(arr[i] > largest){
            largest = arr[i];
        }
    }    
    for(int i=0; i<n; i++){
        if (arr[i] < second_smallest && arr[i] != smallest){
            second_smallest = arr[i];
        }
        if(arr[i] > second_largest && arr[i] != largest){
            second_largest = arr[i];
        }
    }
    cout << "second_smallest:" << second_smallest << endl;
    cout << "second_largest:" << second_largest << endl;

    }

int main(){
    int arr[] = {1, 2, 3, 4, 5};
    int n = sizeof(arr)/sizeof(arr[0]);
    getelement(arr,n);
    return 0;


}




//tc o(n)
// sc o(1)