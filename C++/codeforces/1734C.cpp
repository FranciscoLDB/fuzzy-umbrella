#include <iostream>

int main(){
    int t = 0;
    std::cin >> t;
    int resp[t] = {};
    for(int i = 0; i < t; i++){
        int n = 0;
        std::cin >> n;
        int binary[n] = {};
        for(int j = 0; j < n; j++){
            int b = 0;
            std::cin >> b;
            binary[j] = b;
        }

    }
    for(int i = 0; i < t; i++){
        std::cout << resp[i] << std::endl;
    }

    return 0;
}