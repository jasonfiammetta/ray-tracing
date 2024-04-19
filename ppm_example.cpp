
#include <iostream>

int main() {

    int width = 256;
    int height = 256;

    std::cout << "P3\n" << width << ' ' << height << "\n255\n";

    for (int j = 0; j < height; j++) {
        for (int i = 0; i < width; i++) {
            int r = i;
            int g = j;
            int b = 0;

            std::cout << r << ' ' << g << ' ' << b << '\n';
        }
    }
}
