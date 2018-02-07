#include <iostream>
#include <cmath>

int main() {
    const int N[] = {1000, 10000, 100000, 1000000};
    int rs[] = {2, 4, 16};

    double mi, s;
    for (int r : rs) {
        std::cout << "For r = " << r << std::endl;

        for (int tries_number : N) {
            mi = 0;
            s = 0;

            for (int j = 0; j < tries_number; ++j) {
                double number = std::rand() % (r + 1);
                mi += number / tries_number;
                s += number * number / tries_number;
            }

            std::cout << "For N = " << tries_number
                      << " \taverage: " << mi
                      << " \tstandard deviation: " << sqrt(s - (mi * mi))
                      << std::endl;
        }
        std::cout << std::endl;
    }
}

