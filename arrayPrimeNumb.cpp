// Задача 3.
// Написать функцию/метод, которая возвращает массив простых чисел в диапазоне
// (2 числа - минимальное и максимальное) заданных чисел.
// Например, на вход переданы 2 числа: от 11 до 20
// (диапазон считается включая граничные значения).
// На выходе программа должна выдать [11, 13 , 17, 19]


#include <iostream>
#include <vector>

std::vector<int> primeInPange(int n, int m) {
    bool count;
    std::vector<int> result;

    for (int i = n; i <= m; i++) {
        if (i == 0 || i == 1) continue;
        count = 1;
        for (int j = 2; j <= i / 2; ++j) {
            if(i % j == 0) {
                count = 0;
                break;
            }
        }
        if (count == 1) {
            result.push_back(i);
        }
    }
    return result;
}

// void printVec (std::vector<int> temp) {
//     std::cout << "[";
//     for (auto i : temp) {
//         std::cout << i;
//         if (i < temp.size()) std::cout << " ";
//         else std::cout << "]" << std::endl;
//     }
// }

void printResult(std::vector<int> result) {
    std::cout << "[";
    for (auto i = 0; i < result.size(); ++i) {
        std::cout << result[i];
        if (i < (result.size() - 1)) {std::cout << " ";}
        else {std::cout << "]" << std::endl;}
    }
}

int main() {

    std::vector<int> num = primeInPange(11, 20);
    
    printResult(num);
}