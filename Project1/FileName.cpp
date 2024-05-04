#include <iostream>

void drawTriangle(int n) {
    for (int i = 1; i <= n; ++i) {
        // ������ ������� ����� �����������
        for (int j = 1; j <= n - i; ++j) {
            std::cout << " ";
        }

        // ������ ���������
        for (int j = 1; j <= 2 * i - 1; ++j) {
            std::cout << "*";
        }

        std::cout << std::endl;
    }
}

int main() {
    int height;
    std::cout << "������� ������ ������������: ";
    std::cin >> height;

    drawTriangle(height);

    return 0;
}
