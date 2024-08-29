#include <iostream>
#include <cmath>

using std::cout;
using std::cin;
using std::string;
using number_t = double;

number_t soma(number_t a, number_t b);

int main() {
    //cout << (char) (int) soma(10.5, 89.3) << "\n"; 
    int x = 2;
    int y = 3;
    double z = (double)x/y * 100;
    cout << z << "%\n";

    cout << "idade: ";
    int idade;
    cin >> idade;

    cout << "nome: ";
    string nome;
    std::getline(cin >> std::ws, nome);

    cout << "seu nome: " << nome << "\n";
    cout << "sua idade: " << idade << "\n";
    cout << "x ^ y = " << pow(x, y) << "\n";

    return 0;
}

number_t soma(number_t a, number_t b) {
    return a + b;
}

