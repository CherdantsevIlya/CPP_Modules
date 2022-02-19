#include <iostream>
#include <string>

class Base {
public:
    virtual ~Base() {};
};

class A : public Base {};

class B : public Base {};

class C : public Base {};

Base* generate(void)
{
    std::srand(time(NULL));
    int i = std::rand() % 3 + 1;
    switch (i)
    {
        case 1:
            std::cout << "Class A created" << std::endl;
            return new A();
        case 2:
            std::cout << "Class B created" << std::endl;
            return new B();
        case 3:
            std::cout << "Class C created" << std::endl;
            return new C();
        default:
            std::cout << "Class Base created" << std::endl;
            return new Base();
    }
}

void identify(Base* p)
{
    A *a = dynamic_cast<A*>(p);
    if (a)
        std::cout << "Base* to A* pointer conversion done" << std::endl;
    B *b = dynamic_cast<B*>(p);
    if (b)
        std::cout << "Base* to B* pointer conversion done" << std::endl;
    C *c = dynamic_cast<C*>(p);
    if (c)
        std::cout << "Base* to C* pointer conversion done" << std::endl;
}

void identify(Base& p)
{
    try
    {
        A &a = dynamic_cast<A &>(p);
        (void)a;
        std::cout << "Base& to A& pointer conversion done" << std::endl;
    }
    catch (std::exception &exception) {}
    try
    {
        B &b = dynamic_cast<B &>(p);
        (void)b;
        std::cout << "Base& to B& pointer conversion done" << std::endl;
    }
    catch (std::exception &exception) {}
    try
    {
        C &c = dynamic_cast<C &>(p);
        (void)c;
        std::cout << "Base& to C& pointer conversion done" << std::endl;
    }
    catch (std::exception &exception) {}
}

int main()
{
    Base *type;

    type = generate();
    identify(type);
    identify(*type);
    delete type;
}

