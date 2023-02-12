#include "bitset.h"
#include <iostream>

Bitset::Bitset(const unsigned int count)
{
    m_size = count / 32 + 1;
    m_vec.reserve(m_size);
}

void Bitset::set(const unsigned int n)
{
    unsigned int id = n / 32;
    unsigned int pos = n % 32;
    m_vec[id] |= (1 << pos);
}

void Bitset::reset(const unsigned int n)
{
    unsigned int id = n / 64;
    unsigned int pos = n % 64;
    m_vec[id] &= ~(1 << pos);
}


void Bitset::flip(const unsigned int n)
{
    unsigned int id = n / 64;
    unsigned int pos = n % 64;
    m_vec[id] ^= 1 << pos;
}

void Bitset::print()
{
    for(int i = m_size - 1; i >= 0; --i) {
        std::cout << m_vec[i] << " ";
    }
    std::cout << std::endl;
}

void Bitset::print_binary()
{
    for (int i = m_size - 1; i >= 0; --i) {
        for (int j = 31; j >= 0; --j) {
            unsigned int  tmp = m_vec[i] >> j;
            if (tmp & 1) {
                std::cout << "1";
            }
            else {
                std::cout << "0";
            }
        }
        std::cout << "__";
    }
    std::cout << std::endl;
}
