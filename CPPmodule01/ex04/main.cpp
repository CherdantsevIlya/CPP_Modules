#include <iostream>
#include <fstream>
#include <string>

int main(int argc, char **argv)
{
    std::string s1;
    std::string s2;
    std::string buffInitialFile;
    std::size_t replacement;

    if (argc != 4)
    {
        std::cout << "Error: wrong numb of arguments" << std::endl;
        return (1);
    }
    std::fstream initialFile(argv[1]);
    if (!(initialFile.is_open()))
    {
        std::cout << "Error: file named \'" << argv[1] << "\' does not exist" << std::endl;
        return (1);
    }
    if (initialFile.eof())
    {
        std::cout << "Error: \'" << argv[1] << "\' is empty" << std::endl;
        return (1);
    }
    s1 = argv[2];
    s2 = argv[3];
    if (s1.empty() || s2.empty())
    {
        std::cout << "Error: empty string" << std::endl;
        return (1);
    }
    std::ofstream replacedFile("replacedFile.replace");
    if (!(replacedFile.is_open()))
    {
        std::cout << "Error: file named \'" << argv[1] << "\' does not exist" << std::endl;
        return (1);
    }
    while (std::getline(initialFile, buffInitialFile))
    {
        while ((replacement = buffInitialFile.find(s1, 0)) != std::string::npos)
        {
            buffInitialFile.erase(replacement, s1.length());
            buffInitialFile.insert(replacement, s2);
        }
        replacedFile << buffInitialFile;
        if (!(initialFile.eof()))
            replacedFile << std::endl;
    }
    initialFile.close();
    replacedFile.close();
    return (0);
}