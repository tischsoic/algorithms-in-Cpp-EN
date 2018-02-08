#include <iostream>

static const int M = 1000, N = 20;

void plot(int f[]) {
    for (int i = 0; i <= N; ++i) {
        int c = f[i];

        if (!c) {
            std::cout << '.';
        }
        for (; c > 0; c -= 10) {
            std::cout << '*';
        }

        std::cout << std::endl;
    }
}

bool heads() {
    double l = 10;
    double p = l / N;
    return (double) rand() / RAND_MAX < p;
}

int main() {
    int f[N + 1]{0};

    int cnt;
    for (int i = 0; i < M; ++i, ++f[cnt]) {
        cnt = 0;
        for (int j = 0; j <= N; ++j) {
            if (heads()) {
                ++cnt;
            }
        }
    }

    plot(f);
}