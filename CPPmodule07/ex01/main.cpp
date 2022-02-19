#include "Awesome.hpp"
#include "iter.hpp"

int main(void) {

    int tab[] = {0,1,2,3,4};
    Awesome tab2[5];

    iter(tab, 5, print);
    iter(tab2, 5, print);
    return 0;
}