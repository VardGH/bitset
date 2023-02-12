#include "bitset.h"
#include <iostream>

int main()
{
    Bitset b(64);
    b.set(0);
    b.set(4);
    b.set(6);
    b.set(7);
    b.set(10);
    b.set(60);
    b.set(50);
    b.set(31);
    b.set(40);
    b.set(63);
    b.set(49);
    std::cout << "Set\n";
    b.print();

    b.reset(4);
    b.reset(7);
    b.reset(6);
    b.reset(13);
    std::cout << "Reset\n";
    b.print();

    b.flip(0);
    b.flip(4);
    b.flip(43);
    std::cout << "Flip\n";
    b.print();

    b.print_binary();
    return 0;
}
