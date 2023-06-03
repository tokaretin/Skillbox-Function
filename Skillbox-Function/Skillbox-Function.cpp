#include <iostream>
#include <vector>

// Функция для ввода значений в вектор
std::vector<int> inputVector()
{
    std::vector<int> vec;
    int size;
    std::cout << "Введите размер вектора: ";
    std::cin >> size;

    vec.resize(size);

    std::cout << "Введите значения вектора:\n";
    for (int i = 0; i < size; i++)
    {
        std::cin >> vec[i];
    }

    return vec;
}

// Функция для вывода значений из вектора
void printVector(const std::vector<int>& vec)
{
    std::cout << "Элементы вектора: ";
    for (int i = 0; i < vec.size(); i++)
    {
        std::cout << vec[i];

        if (i < vec.size() - 1)
            std::cout << ", ";
    }
    std::cout << std::endl;
}

int main()
{
    std::vector<int> myVector = inputVector();
    printVector(myVector);

    return 0;
}
