#include "Array.hpp"

int main(void) {

    std::cout << "test 00 (empty array)" << std::endl;
    Array<int> arrayEmpty;
    std::cout << "Array size: " << arrayEmpty.size() << std::endl;
    std::cout << std::endl;

    std::cout << "test 01 (int array)" << std::endl;
    Array<int> arrayInt(3);
    for (int i = 0; i < arrayInt.size(); i++)
        arrayInt.setArray(i + 1, i);
    for (int i = 0; i < arrayInt.size(); i++)
        std::cout << arrayInt[i] << std::endl;
    std::cout << std::endl;

    std::cout << "test 02 (string array)" << std::endl;
    Array<std::string> arrayChar(3);
    arrayChar[0] = "One";
    arrayChar[1] = "Two";
    arrayChar[2] = "Three";
    for (int i = 0; i < arrayChar.size(); i++)
        std::cout << arrayChar[i] << std::endl;
    std::cout << std::endl;

    std::cout << "test 03 (catch exception)" << std::endl;
    Array<float> arrayFloat(10);
    try
    {
        arrayFloat[21] = 42.42f;
        std::cout << arrayFloat[21] << std::endl;
    }
    catch (std::exception &exception)
    {
        std::cerr << exception.what() << std::endl;
    }

    return 0;
}