#include <iostream>

int main(){
    int resp = 0;
    int n = 0;
    std::cin >> n;
    for(int i = 0; i < n; i++){
        int n1 = 0, n2 = 0, n3 = 0;
        std::cin >> n1 >> n2 >> n3;
        if (n1+n2+n3 >= 2) resp++;        
    }
    std::cout << resp;
    return 0;
}