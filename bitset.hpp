#pragma once

#include <vector>
#include <iostream>
#include <utility>

class Bitset
{
public:
    explicit Bitset(const unsigned int);
    Bitset(const Bitset& other);
    Bitset(Bitset&& other) noexcept;
    Bitset& operator=(const Bitset& other);
    Bitset& operator=(Bitset&& other) noexcept;
    ~Bitset() = default;

public:
    void set(const unsigned int); // sets bits to true or given value
    void reset(const unsigned int); // sets bits to false
    void flip(const unsigned int); // toggles the values of bits
    bool test(const unsigned int); // accesses specific bit
    int count() const; // returns the number of bits set to true

public: // checks if all, any or none of the bits are set to true 
    bool all() const;
    bool any() const;
    bool none() const;

public:
    void print() const;
    void print_binary() const;

private:
    unsigned int m_size;
    std::vector<unsigned int> m_vec;
};

