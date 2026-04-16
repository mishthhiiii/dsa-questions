#include<iostream>
using namespace std;

// function (must be outside main OR declared before use)
void PrintArray(int arr[], int n){
    cout << "printing the array" << endl;
    for (int i = 0; i < n ; i++) {
        cout << arr[i] << " ";
    }
    cout << endl << "printing DONE" << endl;
}

int main(){

    // declare
    int number[15];

    // accessing array (fixed index)
    cout << "Value at 14 index " << number[14] << endl;

    // initializing array
    int second[3] = {5, 7, 11};
    cout << "Value at 2 index " << second[2] << endl;
    
    int third[15] = {2,7};
    int n = 15;

    // using function
    PrintArray(third, n);

    // initializing all with 0
    int fourth[10] = {0};
    n = 10;
    PrintArray(fourth, n);

    // only first element = 1, rest = 0
    int fifth[10] = {1};
    PrintArray(fifth, 10);

    cout << endl << "Everything is Fine" << endl;

    return 0;
}
