#include <iostream>

using std::cout;
using std::cin;
using std::string;

int calcStep1(string creditCard){
    int length = creditCard.size();
    int sum = 0;
    for(int i = length-2; i >= 0; i-=2){
        int num = (creditCard[i] - '0') * 2;
        sum += num%10 + num/10;
    }

    return sum;
}
int calcStep2(string creditCard){
    int length = creditCard.size();
    int sum = 0;
    for(int i = length-1; i >= 0; i-=2){
        sum += (creditCard[i] - '0');
    }

    return sum;
}
bool verifyCreditCard(string creditCard){
    int sum1 = 0, sum2 = 0;
    sum1 = calcStep1(creditCard);
    sum2 = calcStep2(creditCard);
    cout << "sum1: " << sum1 << "\n";
    cout << "sum2: " << sum2 << "\n";
    cout << "sum1 + sum2: " << sum1 + sum2 << "\n";
    if((sum1 + sum2) % 10 != 0){
        return false;
    }

    return true;
}

int main(){
    string creditCard = "2010118990139424";
    bool isValid = true;

    isValid = verifyCreditCard(creditCard);

    cout << "creditCard: " << creditCard << "\n";
    if(isValid){
        cout << "This is a VALID cardNumber!" << "\n";
    } else {
        cout << "This is a INVALID cardNumber!" << "\n";
    }

    return 0;
}