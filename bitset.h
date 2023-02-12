#pragma once
#include <vector>

class Bitset
{
public:
    Bitset(const unsigned int);

public:
    void set(const unsigned int);
    void reset(const unsigned int);
    void flip(const unsigned int);
    void print();
    void print_binary();

private:
    unsigned short m_size;
    std::vector<unsigned int> m_vec;
};

