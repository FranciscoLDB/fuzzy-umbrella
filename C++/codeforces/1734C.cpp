#include <iostream>



int main(){
    int t = 0;
    std::cin >> t;
    int resp[t] = {};
    for(int i = 0; i < t; i++){
        
        long n = 0;
        std::cin >> n;
        int b = 0;
        std::cin >> b;

        int T[n] = {};
        int cont0 = 0;
        int* E = nullptr;
        for(long j = 0; j < n; j++){
            T[j] = b;
            if(!b) cont0++;
        }
        E = new int[cont0];
        for(long j = 0; j < n; j++){
            std::cout << T[j];
        }
        std::cout << std::endl;
    }
    for(int i = 0; i < t; i++){
        std::cout << resp[i] << std::endl;
    }

    return 0;
}