#include <cmath>
#include "Triangle.h"

float area(Triangle t) {
    return (std::abs(((t.a.x - t.c.x) * (t.b.y - t.a.y) - (t.a.x - t.b.x) * (t.c.y - t.a.y)))) / 2;
}
