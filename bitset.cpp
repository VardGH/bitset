#include "bitset.h"
#include <iostream>

Bitset::Bitset(const unsigned int count)
{
    m_size = count / 64 + 1;
    m_vec.reserve(m_size);
}

void Bitset::set(const unsigned int n)
{
    int id = n / 64;
    int pos = n % 64;
    m_vec[id] |= (1 << pos);
}

void Bitset::reset(const unsigned int n)
{
    int id = n / 64;
    int pos = n % 64;
    m_vec[id] &= ~(1 << pos);
}


void Bitset::flip(const unsigned int n)
{
    int id = n / 64;
    int pos = n % 64;
    m_vec[id] ^= 1 << pos;
}

void Bitset::print()
{
    for(int i = m_size; i >= 0; --i) {
        std::cout << m_vec[i] << " ";
    }
    std::cout << std::endl;
}
