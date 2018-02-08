#include <iostream>
#include <algorithm>

static const int N = 1000000;

int main() {
    std::vector<bool > a(N, true);

    for (int i = 2; i < N; ++i) {
        if (a[i]) {
            for (unsigned long long int j = i; i * j < N; ++j) {
                a[i * j] = 0;
            }
        }
    }

    for (int i = 2; i < N; ++i) {
        if (a[i] == 1) {
            std::cout << i << ", ";
        }
    }

}