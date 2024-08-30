#include <iostream>
#include <string>
#include <vector>
#include <limits>

bool minMultK(int el, int k, int* S){
    //std::cout << "el: " << el << " | k-1: " << k-1 << std::endl;
    for(int i = k-1; i < el-1; i+=k){
        //std::cout << "S[" << i << "]: " << S[i] << std::endl;
        if(S[i] != 0){
            //std::cout << "FALSE" << std::endl;
            return false;
        }
    }
    return true;
}

int main(){
    int t = 0;
    std::cin >> t;
    std::vector<int> resp;
    
    for(int i = 0; i < t; i++){
        long n = 0;
        std::cin >> n;
        
        //std::string b;
        //b.reserve(n);
        //std::getline(std::cin >> std::ws, b);
        
        char* b = nullptr;
        b = new char[n+1];
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        std::cin.getline(b, n+1);
        
        //std::cout << "You entered: " << b << std::endl;
        int S[n] = {};
        int T[n] = {};
        int cont0 = 0;
        for(long j = 0; j < n; j++){
            S[j] = j+1;
            if(!(bool)(b[j]-'0')){ 
                T[cont0++] = j+1;
            }
        }
        delete[] b;
        b = nullptr;

        int totalCost = 0;
        for(long j = 0; j < cont0; j++){
            //std::cout << T[j] << " ";
            for(int k = T[0]; k <= T[j]; k++){
                //std::cout << "T[j]: " << T[j] << " k: " << k << std::endl;
                if(T[j]%k == 0 && minMultK(T[j], k, S)){
                //if(T[j]%k == 0){
                    totalCost += k;
                    //std::cout << "[Excluding] Item: " << T[j] << " cost: " << k << " S[k]:" << S[k-1] << std::endl;
                    S[T[j]-1] = 0;
                    break;
                }
            }
        }
        resp.push_back(totalCost);

    }
    //std::cout << "¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨" << std::endl;
    for(int i = 0; i < t; i++){
        std::cout << resp[i] << std::endl;
    }


    return 0;
}