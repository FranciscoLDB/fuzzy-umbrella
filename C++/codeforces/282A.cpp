#include <iostream>

int main(){
    int x = 0, n = 0;
    std::cin >> n;
    for(int i=0; i<n; i++){
        std::string strAux = "";
        std::cin >> strAux;
        (strAux[1] == '+') ? x++ : x--;
    }
    std::cout << x << std::endl;
    return 0;
}