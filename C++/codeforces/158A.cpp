#include <iostream>

int main(){
    int n = 0, k = 0, x = 0;
    std::cin >> n >> k;
    int arr[n] = {};

    for(int i=0; i<n; i++){
        std::cin >> arr[i];
    }
    int p = arr[k-1];
    for(int i=n-1; i >=0; i--){
        if(arr[i] >= p && arr[i] > 0){
            std::cout << i+1 << std::endl;
            x++;
            break;
        }
    }
    if(!x) std::cout << 0 << std::endl;

    return 0;
}