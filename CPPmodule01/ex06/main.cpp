#include "Karen.hpp"

int main(int argc, char **argv)
{
    Karen karen;
    int i;

    i = argc;
    switch (i) {
        case 2:
            karen.complain(argv[1]);
            break ;
        default:
            std::cout << "\x1b[31mError: wrong numb of arguments\x1b[0m" << std::endl;
            break ;
    }
}

