#include "polygon.hh"

Polygon::Polygon() : _points({{0}}) {}

Polygon::Polygon(const std::vector<Point>& corners) : _points(corners) {}

Polygon::Polygon(const std::vector<double>& x, const std::vector<double>& y) : _points({{}}) {
    for(unsigned int i = 0; i <= x.size() -1; i++) {
        Point p;
        p.set_x(x[i]);
        p.set_y(y[i]);
        _points.push_back(p);
    }
}

std::size_t Polygon::corners() const {
    return _points.size();
}

const Point& Polygon::corner(std::size_t i) const {
    return _points[i];
}

//aufgabe c
double Polygon::volume() const {
    const double pi = 3.1415;
    std::size_t n = _points.size();
    double x, y;
    if(n <= 2) return 0;
    for(unsigned int i = 0; i < n - 1; i++) {
        
    }   

}




