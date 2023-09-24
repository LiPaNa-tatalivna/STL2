#include <iostream>
#include <vector>
#include <unordered_set>

template<typename T>
void removeDuplicates(std::vector<T>& vec) {
    std::unordered_set<T> uniqueElements;
    vec.erase(std::remove_if(vec.begin(), vec.end(), [&](const T& element) {
        return !uniqueElements.insert(element).second;
    }), vec.end());
}

int main() {
    std::vector<int> numbers = { 1, 2, 3, 2, 4, 1, 5, 6, 3, 7, 8, 4, 9 };
    std::cout << "Исходный вектор: ";
    for (int number : numbers) {
        std::cout << number << " ";
    }
    std::cout << std::endl;

    removeDuplicates(numbers);

    std::cout << "Вектор без дубликатов: ";
    for (int number : numbers) {
        std::cout << number << " ";
    }
    std::cout << std::endl;

    return 0;
}
