#ifndef CANVAS_HH
#define CANVAS_HH

#include <vector>
#include "point.hh"

class Canvas {
    const double _height, _width;
    const int _horPixels, _vertPixels;
    const Point _center;
    std::vector<std::vector<int>> _pixels;
    public:
        Canvas(const Point& center, double width, double height, int horPixels, int vertPixels);
        int brightness(int i, int j) const;
        void setBrightness(int i, int j, int brightness);
        Point coord(int i, int j) const;
};

#endif