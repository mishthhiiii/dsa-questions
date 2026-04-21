// #include<iostream>
// using namespace std;
// int main(){


//     // void PrintArray(){

//     // }
//     //declare
//     int number[15];

//     //accessing an array
//     cout << "Value at 15 index " << number[15] << endl;
//     //cout << "Value at 20 index " << number[20] << endl; exception hai error aaega 
 

//     //initialising an array
//     int second[3] = {5, 7,11};
//     //accessing an array
//     cout << "Value at  2 index " << second[2] << endl;
    
//     int third[15] = {2,7};
    
//      int n = 15; //declaring n 
//      cout <<"printing the array" << endl;
//     //print the array 
//     for (int i = 0; i < n ; i++) {
//     cout << third[i] << " ";
//     } 

//     //initializing all locations with 0
//     int fourth[10] = {0};
//     n = 10; //updating n 
//     for (int i = 0; i < n ; i++) {
//         cout << fourth[i] << " ";
//         }
    
//     cout <<endl << "printing the array" << endl;
//     //print the array 
  
//     //initializing all locations with 0 [not possible with below line but possible with array declaration]
//     int fifth[10] = {1};
//     n = 10; //updating n 
//     for (int i = 0; i < n ; i++) {
//         cout << fifth[i] << " ";
//         }
    
//     cout <<endl << "printing the array" << endl;

//     cout << endl << "Everything is Fine" << endl << endl;
//     return 0;
// } 

#include<iostream>
using namespace std;

// function (must be outside main OR declared before use)
void PrintArray(int arr[], int size){
    cout << "printing the array" << endl;
    for (int i = 0; i < size ; i++) {
        cout << arr[i] << " ";
    }
    cout << endl << "printing DONE" << endl;
}

int main(){

    // declare
    int number[15];

    // accessing array (fixed index)
    // cout << "Value at 14 index " << number[14] << endl;

    // initializing array
    int second[3] = {5, 7, 11};
    // cout << "Value at 2 index " << second[2] << endl;
    
    int third[15] = {2,7};
    int n = 15;
    // using function
    // PrintArray(third, n);

    int thirdSize = sizeof(third)/sizeof(int);
    // cout << "length of third array is : " << thirdSize << endl;


    // initializing all with 0
    int fourth[10] = {0};
    n = 10;
    // PrintArray(fourth, n);

    // only first element = 1, rest = 0
    int fifth[10] = {1};
    // PrintArray(fifth, 10);
    

    // int fifthSize = sizeof(fifth)/sizeof(int);
    // cout << "length of array is : " << fifthSize << endl;

    char ch[5] = {'a', 'b', 'c', 'r', 'p'}; 
    cout << ch[3] << endl;

    cout << " printing the array " << endl;
    for(int i =0; i<5; i++) {
        cout << ch[i] << " ";
    }
    cout << endl <<" printing DONE " << endl;
    double firstDouble[5];
    
    float firstFloat[6];
    bool firstBool[9];

    cout << endl << "Everything is Fine" << endl;

    return 0;
}