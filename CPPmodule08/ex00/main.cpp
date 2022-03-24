#include "easyfind.hpp"

int main()
{
    // test 00 (vector)
    std::vector<int> vec;
    vec.push_back(100);
    vec.push_back(21);
    vec.push_back(88);
    vec.push_back(1);
    vec.push_back(1234);
    try {
        std::cout << easyfind(vec, 88) << std::endl;
    }
    catch (const char* string) {
        std::cout << string << std::endl;
    }
    try {
        std::cout << easyfind(vec, 444) << std::endl;
    }
    catch (const char* string) {
        std::cout << string << std::endl;
    }
    std::cout << std::endl;

    // test 01 (list)
    std::list<int> lst;
    lst.push_back(4);
    lst.push_back(800);
    lst.push_back(17);
    try {
        std::cout << easyfind(lst, 4) << std::endl;
    }
    catch (const char* string) {
        std::cout << string << std::endl;
    }
    try {
        std::cout << easyfind(lst, 2022) << std::endl;
    }
    catch (const char* string) {
        std::cout << string << std::endl;
    }
}

