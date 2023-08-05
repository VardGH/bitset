# Bitset

The `Bitset` class is a C++ implementation of a dynamic-size bitset, where each bit can be set (true) or reset (false). It uses a `std::vector` to store the bits efficiently.

## Features

- Set individual bits to true or false.
- Reset individual bits to false.
- Toggle the values of individual bits.
- Access the value of a specific bit at a given index.
- Count the number of bits set to true.
- Check if all, any, or none of the bits are set to true.
- Print the contents of the `Bitset` in decimal format or binary format.

## Usage

### Include the Header File

```cpp
#include "bitset.h"
```

### Creating a `Bitset`

You can create a `Bitset` by specifying the number of bits you want in the constructor:

```cpp
const unsigned int num_bits = 50;
Bitset my_bitset(num_bits);
```

### Setting and Resetting Bits

You can set a specific bit to true using the `set` function:

```cpp
my_bitset.set(2);
```

You can reset a specific bit to false using the `reset` function:

```cpp
my_bitset.reset(5);
```

### Flipping Bits

You can toggle the value of a specific bit using the `flip` function:

```cpp
my_bitset.flip(10);
```

### Accessing Specific Bit

You can access the value of a specific bit at a given index using the `test` function:

```cpp
bool bit_value = my_bitset.test(15);
```

### Counting Bits

You can count the number of bits set to true using the `count` function:

```cpp
int num_set_bits = my_bitset.count();
```

### Checking for All, Any, or None

You can check if all bits are set to true using the `all` function:

```cpp
bool all_bits_set = my_bitset.all();
```

You can check if any bit is set to true using the `any` function:

```cpp
bool any_bit_set = my_bitset.any();
```

You can check if none of the bits are set to true using the `none` function:

```cpp
bool no_bits_set = my_bitset.none();
```

### Printing the Bitset

You can print the contents of the `Bitset` in decimal format using the `print` function:

```cpp
my_bitset.print();
```

You can print the contents of the `Bitset` in binary format using the `print_binary` function:

```cpp
my_bitset.print_binary();
```