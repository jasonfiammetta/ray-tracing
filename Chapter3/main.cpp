#include "color.h"
#include "vec3.h"

#include <iostream>

int main() {

    int width = 256;
    int height = 256;

    std::cout << "P3\n" << width << ' ' << height << "\n255\n";

    int threshold = 9;

    for (int j = 0; j < height; j++) {

        std::clog << "\rLine " << j << " of " << height << std::flush;

        for (int i = 0; i < width; i++) {
            vec3 pixel_color = color(double(i) / (width - 1), double(j)/(height - 1), 0);
            write_color(std::cout, pixel_color);
        }
    }
    std::clog << "\rdone                     \n"; 
    // extra spaces overwrite last log line
    // without them it writes: done 255 of 256
}
