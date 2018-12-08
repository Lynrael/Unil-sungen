#include "canvas.hh"

Canvas::Canvas(const Point& center, double width, double height, int horPixels, int vertPixels) : _center(floor(horPixels/2), floor(vertPixels/2)), _width(width), _height(height), _horPixels(horPixels), _vertPixels(vertPixels) {
    for(unsigned int i = 0; i < horPixels; i++) {
        std::vector<int> verticalPixels;
        for(unsigned int j = 0; j < vertPixels; j++) {
            verticalPixels.push_back(j);
            _pixels.push_back(verticalPixels);
        }
    }
}

int Canvas::brightness(int i, int j) const {
    return _pixels[i][j];
}

void Canvas::setBrightness(int i, int j, int brightness) {
    _pixels[i][j] = brightness;
}

Point Canvas::coord(int i, int j) const {
    Point coordinate(i,j);
    return coordinate;
}



