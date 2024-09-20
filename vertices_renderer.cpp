#include <iostream>

void render(int matriz2D[][2], int width, int height, int size);

int main() {
    int polygon_vertices[][2] = { //{X, Y}
        {0, 2},
        {10, 2},
        {10, 7},
        {0, 7}
    };
    int polygonY_size = sizeof(polygon_vertices) / sizeof(polygon_vertices[0]);

    render(polygon_vertices, 40, 10, polygonY_size);

    return 0;
}

bool haveVertice(int matriz2D[][2], int value_x, int value_y, int size) {
    for(int i = 0; i < size; i++) {
        if (matriz2D[i][0] == value_x && matriz2D[i][1] == value_y) {
            return true;
        }
    }

    return false;
}

void render(int matriz2D[][2], int width, int height, int size) {
    for(int y = 0; y < height; y++) {
        for(int x = 0; x < width; x++) {
            if (haveVertice(matriz2D, x, y, size)) {
                std::cout << '@';
            } else {
                std::cout << ':';
            }
        }
        std::cout << '\n';
    }
}