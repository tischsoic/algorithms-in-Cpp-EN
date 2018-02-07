#include <iostream>
#include <cstdlib>

#include "Point.h"
#include "Triangle.h"

float randomFromUnitSquare() {
    return (float)std::rand() / RAND_MAX;
}

Point randomPoint() {
    return Point {randomFromUnitSquare(), randomFromUnitSquare()};
}

int main() {

    for (int i = 3; i > 0; --i) {
        Triangle randTriangle{randomPoint(), randomPoint(), randomPoint()};

        std::cout << "Random triangle area: " << area(randTriangle) << std::endl;
    }

    return 0;
}