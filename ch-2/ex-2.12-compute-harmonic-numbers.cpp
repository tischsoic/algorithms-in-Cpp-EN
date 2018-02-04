#include <iostream>
#include <cmath>

const double M_Euler_Mascheroni = 0.57721566490153286060651209008240243104215933593992;


int main() {
    int N;
    double H_N;
    std::cout << "Program computes approximation of Harmonic numbers sum H_N" << std::endl;
    std::cout << "Give N: ";
    std::cin >> N;
    H_N = std::log(N) + M_Euler_Mascheroni;
    std::cout << "H_N = " << H_N;
}
