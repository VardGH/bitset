#include "bitset.h"
#include <iostream>

int main()
{
     Bitset b(99);

     b.set(0);
     b.set(4);
     b.set(6);
     b.set(7);
     b.set(10);

     b.set(64);
     b.set(67);
     b.set(70);
     b.set(75);

     std::cout << "Set\n";
     b.print();

     b.reset(4);
     b.reset(7);
     b.reset(6);

     b.reset(67);

     std::cout << "Reset\n";
     b.print();

     return 0;
}
