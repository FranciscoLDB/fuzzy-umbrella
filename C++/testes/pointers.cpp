#include <iostream>

using std::cout;
using std::cin;
using std::string;

int main(){
    string name = "John";
    string *ptr = &name;

    string pizzas[5] = {"Pepperoni", "Cheese", "Ham", "Pineapple", "Supreme"};
    string *ptr2 = pizzas;

    cout << "name: " << name << "\n";
    cout << "&name: " << &name << "\n\n";

    cout << "ptr: " << ptr << "\n";
    cout << "*ptr: " << *ptr << "\n";
    cout << "&ptr: " << &ptr << "\n\n";

    int *pointer = nullptr;
    int x = 123;
    //pointer = &x;

    if (pointer != nullptr)
    {
        cout << "pointer assignd" << "\n";
        cout << pointer << "\n";
    } else {
        cout << "pointer NOT assignd" << "\n";
    }


    return 0;
}