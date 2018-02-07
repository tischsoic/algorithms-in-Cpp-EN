#include <iostream>
#include <stdlib.h>
#include <math.h>

using namespace std;

typedef int Number;

Number randNum() {
    return round((float)rand() / RAND_MAX);
}

int main(int argc, char *argv[]) {
    int N = 1000;
    float m1 = 0.0, m2 = 0.0;
    for (int i = 0; i < N; i++) {
        Number x = randNum();
        m1 += ((float) x) / N;
        m2 += ((float) x * x) / N;
    }
    cout << " Avg.: " << m1 << endl;
    cout << "Std.dev.: " << sqrt(m2 - m1 * m1) << endl;
}

