#include "point.hh"
//aufgabe 1a

Point::Point(double x, double y) : _x(x), _y(y) {}

double Point::x() const {
    return _x;
}

double Point::y() const {
    return _y;
}

void Point::set_x(double new_x) {
    _x = new_x;
}

void Point::set_y(double new_y) {
    _y = new_y;
} 

// int main() {
//     Point p;
//     p.set_x(1234);
//     p.set_y(6342);
//     printf("x: %g y: %g \n", p.x(), p.y());
//     return 0;
// }



