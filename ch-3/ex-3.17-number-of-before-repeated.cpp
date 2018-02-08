#include <iostream>

static const int N = 10000;

int main() {
    bool a[N] {0};

    int repetitions;
    for(repetitions = 0; ; ++repetitions) {
        int number = rand() % N;

        if(a[number]) {
            break;
        }
        a[number] = 1;
    }

    std::cout<<repetitions;

    return 0;
}

