#include <bits/stdc++.h>
using namespace std;

int smallestnumber(int arr[], int n){
    int min = arr[0];

    for(int i =0 ; i<n; i++){
        if(min >arr[i]){
            min = arr[i];
      }
    }
    return min;
}
 int main(){
    int arr[] = {1, 2, 3, 4, 5};
    int n = 5;
    smallestnumber(arr,n);
    cout << "The smallest number is: " << smallestnumber(arr,n) << endl;


 }

 //tc o(n)
 // sc o(1)

 