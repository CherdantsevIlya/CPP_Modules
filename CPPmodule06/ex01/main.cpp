#include <iostream>
#include <string>

typedef struct s_data
{
    int value;
}   Data;

uintptr_t serialize(Data* ptr)
{
    return reinterpret_cast<uintptr_t>(ptr);
}

Data* deserialize(uintptr_t raw)
{
    return reinterpret_cast<Data*>(raw);
}

int main()
{
    Data data;
    uintptr_t ptr;
    Data *tmp;
    
    data.value = 42;
    ptr = serialize(&data);
    tmp = deserialize(ptr);

    std::cout << "data address:\t" << &data << std::endl;
    std::cout << "tmp address:\t" << tmp << std::endl;

    std::cout << "data value:\t" << data.value << std::endl;
    std::cout << "tmp value:\t" << tmp->value << std::endl;
}