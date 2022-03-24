#include "MutantStack.hpp"
#include <iostream>
#include <list>

int main()
{
    MutantStack<int> mstack;
    mstack.push(5);
    mstack.push(17);
    std::cout << mstack.top() << std::endl;
    mstack.pop();
    std::cout << mstack.size() << std::endl;
    std::cout << std::endl;
    mstack.push(3);
    mstack.push(5);
    mstack.push(737);
    mstack.push(0);
    MutantStack<int>::iterator it = mstack.begin();
    MutantStack<int>::iterator ite = mstack.end();
    ++it;
    --it;
    while (it != ite)
    {
        std::cout << *it << std::endl;
        ++it;
    }
    std::stack<int> s(mstack);
	std::cout << std::endl;

    std::list<int> lst;
    lst.push_back(65);
    lst.push_back(18);
    lst.push_back(373);
    lst.push_back(3);

    MutantStack<int, std::list<int> >::iterator first = lst.begin();
    MutantStack<int, std::list<int> >::iterator last = lst.end();
    while (first != last)
    {
        std::cout << *first << std::endl;
        ++first;
    }
    std::cout << std::endl;

    return 0;
}
