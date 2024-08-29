#include <iostream>

using std:: cout;
using std:: cin;
using std:: endl;

int main(){
    std::cout << "Hello World!" << std::endl;
    int size = 0;
    std::cin >> size;

    int arr[size]; 
    cout << sizeof(arr) << endl;
    int size2 = sizeof(arr)/sizeof(arr[0]);

    for(int i = 0; i < size2; i++){
        arr[i] = i;
    }
    for(int arr: arr){
        cout << arr << " ";
    }
    cout << endl;
    
    int *arr2 = NULL;
    arr2 = new int[size];

    delete[] arr2;

    return 0;
}