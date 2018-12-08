#undef NDEBUG
#include <cassert>
#include "canvas.hh"

auto create_canvas(double width, double height, int horPixels, int vertPixels) {
    Point center(width, height);
    Canvas testCanvas(center, width, height, horPixels, vertPixels);
    return testCanvas;
}

int main() {
    auto canvas = create_canvas(100, 50, 2000, 1500);
    for(unsigned int i = 0; i < 2000; i++) {
        for(unsigned int j = 0; j < 1500; j++) {
            std::cout << canvas.brightness(i,j) << std::endl;
        }
    }
}