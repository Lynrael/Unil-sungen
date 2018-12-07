#include "point.cc"

int main() {
    Point p;
    p.set_x(1234);
    p.set_y(6342);
    printf("x: %g y: %g \n", p.x(), p.y());
    return 0;
}