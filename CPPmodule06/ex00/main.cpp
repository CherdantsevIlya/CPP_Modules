#include "Convert.hpp"

int main(int argc, char **argv)
{
    if (argc != 2)
        std::cout << "Error: wrong numb of arguments" << std::endl;
    else
    {
        try
        {
            Convert arg(argv[1]);
            arg.printAll();
        }
        catch (std::exception &exception)
        {
            std::cerr << "Invalid input" << std::endl;
        }
    }
    return (0);
}
