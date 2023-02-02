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

private:
    unsigned short m_size;
    std::vector<long long> m_vec;
};

