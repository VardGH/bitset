#include "bitset.hpp"

Bitset::Bitset(const unsigned int count)
{
    m_size = count / 32 + (count % 32 != 0);  // Calculation for m_size.
    m_vec.assign(m_size, 0);  // Initialize the vector with zeros.
}

Bitset::Bitset(const Bitset& other)
    : m_size(other.m_size)
    , m_vec(other.m_vec)
{
}

Bitset::Bitset(Bitset&& other) noexcept
    : m_size(std::exchange(other.m_size, 0))
    , m_vec(std::move(other.m_vec))
{
}

Bitset& Bitset::operator=(const Bitset& other)
{
    if (this != &other) {
        m_size = other.m_size;
        m_vec = other.m_vec;
    }
    return *this;
}

Bitset& Bitset::operator=(Bitset&& other) noexcept
{
    if (this != &other) {
        m_size = std::exchange(other.m_size, 0);
        m_vec = std::move(other.m_vec);
    }
    return *this;
}

void Bitset::set(const unsigned int n)
{
    unsigned int id = n / 32;
    unsigned int pos = n % 32;
    m_vec[id] |= (1u << pos);  // Use "1u" to specify an unsigned int literal.
}

void Bitset::reset(const unsigned int n)
{
    unsigned int id = n / 32;
    unsigned int pos = n % 32;
    m_vec[id] &= ~(1u << pos);  // Use "1u" to specify an unsigned int literal.
}

void Bitset::flip(const unsigned int n)
{
    unsigned int id = n / 32;
    unsigned int pos = n % 32;
    m_vec[id] ^= (1u << pos);  // Use "1u" to specify an unsigned int literal.
}

bool Bitset::test(const unsigned int index)
{
    unsigned int id = index / 32;
    unsigned int pos = index % 32;
    return (m_vec[id] & (1u << pos)) != 0;
}

int Bitset::count() const
{
    int count = 0;
    const unsigned int one = 1;

    for (const auto& num : m_vec) {
        unsigned int temp = num; // Make a local copy of num.
        while (temp != 0) {
            count += temp & one;
            temp >>= 1;
        }
    }

    return count;
}

bool Bitset::any() const
{
    for (const auto& num : m_vec) {
        if (num != 0) {
            return true;
        }
    }
    return false;
}

bool Bitset::none() const
{
    for (const auto& num : m_vec) {
        if (num != 0) {
            return false;
        }
    }
    return true;
}

bool Bitset::all() const
{
    const unsigned int one = 1;
    unsigned int mask = one;

    for (const auto& num : m_vec) {
        if ((num & mask) != mask) {
            return false;
        }
    }

    return true;
}

void Bitset::print() const
{
    for (int i = m_size - 1; i >= 0; --i) {
        std::cout << m_vec[i] << " ";
    }
    std::cout << std::endl;
}

void Bitset::print_binary() const
{
    for (int i = m_size - 1; i >= 0; --i) {
        for (int j = 31; j >= 0; --j) {
            unsigned int tmp = m_vec[i] >> j;
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