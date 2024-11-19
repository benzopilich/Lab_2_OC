#include <windows.h>
#include <iostream>
#include <vector>
#include<conio.h>

int main(int argc, char* argv[]) {
    setlocale(0, "rus");
    if (argc < 2) {
        std::cerr << "Недостаточно аргументов." << std::endl;
        return 1;
    }

    // Получение размера массива
    int size = atoi(argv[1]);

    // Получение элементов массива
    std::vector<long> array(size);
    for (int i = 0; i < size; ++i) {
        array[i] = atol(argv[i + 2]);
    }

    // Вычисление суммы квадратов
    long sumOfSquares = 0;
    for (const auto& elem : array) {
        sumOfSquares += elem * elem;
    }

    std::cout << "Сумма квадратов: " << sumOfSquares << std::endl;


    return 0;
}
