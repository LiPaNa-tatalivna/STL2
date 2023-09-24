#include <iostream>
#include <set>
#include <vector>
#include <list>

template<typename Container>
void printContainer(const Container& container) {
    for (const auto& element : container) {
        std::cout << element << " ";
    }
    std::cout << std::endl;
}

int main() {
    std::set<int> mySet = { 1, 2, 3, 4, 5 };
    std::vector<std::string> myVector = { "Hello", "World" };
    std::list<double> myList = { 1.23, 4.56, 7.89 };

    std::cout << "Содержимое mySet: ";
    printContainer(mySet);

    std::cout << "Содержимое myVector: ";
    printContainer(myVector);

    std::cout << "Содержимое myList: ";
    printContainer(myList);

    return 0;
}
