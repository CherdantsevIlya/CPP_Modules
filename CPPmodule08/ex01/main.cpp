#include "Span.hpp"

int main()
{
    // test 00
    Span sp = Span(5);
    sp.addNumber(6);
    sp.addNumber(3);
    sp.addNumber(17);
    sp.addNumber(9);
    sp.addNumber(11);
    std::cout << sp.shortestSpan() << std::endl;
    std::cout << sp.longestSpan() << std::endl;
    std::cout << std::endl;

    // test 01
    try {
        Span sp1 = Span(3);
        sp1.addNumber(72);
    }
    catch (std::exception &exception) {
        std::cout << exception.what() << std::endl;
    }
    std::cout << std::endl;

    // test 02
    try {
        Span sp2 = Span(1);
        sp2.addNumber(500);
        sp2.shortestSpan();
    }
    catch (std::exception &exception) {
        std::cout << exception.what() << std::endl;
    }
    std::cout << std::endl;

    // test 03
    try {
        Span sp3 = Span(0);
        sp3.longestSpan();
    }
    catch (std::exception &exception) {
        std::cout << exception.what() << std::endl;
    }
    std::cout << std::endl;

    // test 04
    std::vector<int> vectorSpan;
    vectorSpan.push_back(34);
    vectorSpan.push_back(205);
    vectorSpan.push_back(6);
    vectorSpan.push_back(70);
    vectorSpan.push_back(99);
    Span sp4(5);
    sp4.addNumber(vectorSpan.begin(), vectorSpan.end());
    std::cout << sp4.shortestSpan() << std::endl;
    std::cout << sp4.longestSpan() << std::endl;
    std::cout << std::endl;

    // test 05
    std::vector<int> BigBoy;
    std::srand(time(nullptr));
    for (int i = 0; i < 1000; i++) {
        BigBoy.push_back(std::rand() % 123456789);
    }
    Span sp5(1000);
    sp5.addNumber(BigBoy.begin(), BigBoy.end());
    std::cout << sp5.shortestSpan() << std::endl;
    std::cout << sp5.longestSpan() << std::endl;
    std::cout << std::endl;

    return 0;
}
