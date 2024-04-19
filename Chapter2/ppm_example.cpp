#include <iostream>

int main() {

    int width = 256;
    int height = 256;

    std::cout << "P3\n" << width << ' ' << height << "\n255\n";

    int threshold = 9;

    for (int j = 0; j < height; j++) {

        std::clog << "\rLine " << j << " of " << height << std::flush;

        for (int i = 0; i < width; i++) {
            int r = i;
            int g = j;
            int b = 0;

            std::cout << r << ' ' << g << ' ' << b << '\n';
        }
    }
    std::clog << "\rdone                     \n"; 
    // extra spaces overwrite last log line
    // without them it writes: done 255 of 256
}
