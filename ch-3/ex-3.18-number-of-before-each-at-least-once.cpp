#include <iostream>

static const int N = 10000;

int main() {
    bool a[N] {0};

    int repetitions, uniqueNumbersCount = 0;
    for(repetitions = 0, uniqueNumbersCount = 0; ; ++repetitions) {
        if (uniqueNumbersCount == N) {
            break;
        }

        int number = rand() % N;

        if(!a[number]) {
            a[number] = 1;
            ++uniqueNumbersCount;
        }
    }

    std::cout<<repetitions;

    return 0;
}

