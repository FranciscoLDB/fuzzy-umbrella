#include <iostream>

int main() {
    long long n, m, a;
    std::cin >> n >> m >> a;
    std::cout <<  ((n/a) + (n%a != 0)) * ((m/a) + (m%a != 0));

    return 0;
}