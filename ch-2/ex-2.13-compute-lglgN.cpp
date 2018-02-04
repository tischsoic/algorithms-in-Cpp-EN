#include <iostream>
#include <cmath>

int main() {
    int N;
    std::cout << "Program computes approximation of lg lg N" << std::endl;
    std::cout << "Give N: ";
    std::cin >> N;

    double lg_N, lg_lg_N;
    for (lg_N = 0; N >= 2; ++lg_N, N /= 2);
    for (lg_lg_N = 0; lg_N >= 2 ; ++lg_lg_N, lg_N /= 2);

    std::cout << "lg lg N = " << lg_lg_N;
}
