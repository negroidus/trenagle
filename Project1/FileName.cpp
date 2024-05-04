#include <iostream>

void drawTriangle(int n) {
    for (int i = 1; i <= n; ++i) {
        // Рисуем пробелы перед звездочками
        for (int j = 1; j <= n - i; ++j) {
            std::cout << " ";
        }

        // Рисуем звездочки
        for (int j = 1; j <= 2 * i - 1; ++j) {
            std::cout << "*";
        }

        std::cout << std::endl;
    }
}

int main() {
    int height;
    std::cout << "Введите высоту треугольника: ";
    std::cin >> height;

    drawTriangle(height);

    return 0;
}
