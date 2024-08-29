#include <iostream>
#include <string>

int main(){
    int n = 0;
    std::cin >> n;

    std::string resp[n];
    for(int i = 0; i < n; i++){
        std::string str = "";
        std::cin >> str;
        int strLen = 0;
        strLen = str.length();
        std::string strResp = "";
        strResp = str[0] + std::to_string(strLen-2) + str[strLen-1];
        resp[i] = strResp;
    }
    for(int i = 0; i < n; i++){
        std::cout << resp[i] << "\n";
    }
    
}