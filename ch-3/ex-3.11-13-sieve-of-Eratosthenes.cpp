#include <iostream>
#include <algorithm>

typedef bool eraType;

static const int N = 10000;

void drawPlot(eraType a[]) {
    for (int i = 2, primesNo = 0; i < N; ++i) {
        if (a[i]) {
            ++primesNo;
        }

        for(float j = (float)primesNo / i; j > 0; j -= 0.005) {
            std::cout<<'*';
        }
        std::cout<<std::endl;
    }
}

int main() {
    eraType a[N];

    std::fill_n(a, N, 1);

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

    drawPlot(a);
}