#include "point.hh"
#include "canvas.hh"

int main(int argc, char *argv[]) {
    Point center(2000, 1500);
    Canvas canvas(center, 4,3, 4000, 3000);
    for(int i = 0; i < 4000; i++) {
        for(int j = 0; i < 3000; i++) {
            int brightness = std::max(0, static_cast<int>(100 * (std::sin(std::pow(i, -1)) * std::sin(std::pow(j, -1)) + 1)));
            canvas.setBrightness(i,j, brightness);
        }
    }
    canvas.write("first_image.pgm");

    return 0;
}