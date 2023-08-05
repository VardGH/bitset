#include "test_bitset.hpp"

void test_bitset()
{
    const unsigned int num_bits = 50;

    Bitset my_bitset(num_bits);

    // Setting some bits
    my_bitset.set(2);
    my_bitset.set(5);
    my_bitset.set(10);
    my_bitset.set(31);
    my_bitset.set(35);
    my_bitset.set(40);

    std::cout << "Bit at index 2: " << my_bitset.test(2) << std::endl;
    std::cout << "Bit at index 5: " << my_bitset.test(5) << std::endl;
    std::cout << "Bit at index 10: " << my_bitset.test(15) << std::endl;
    std::cout << "Bit at index 20: " << my_bitset.test(20) << std::endl;

    // Printing the bitset in integer format and binary format
    std::cout << "Bitset in integer format: ";
    my_bitset.print();

    std::cout << "Bitset in binary format : ";
    my_bitset.print_binary();

    std::cout << "Number of set bits: " << my_bitset.count() << std::endl;

    // Flipping and resetting bits
    my_bitset.flip(5); // Toggling bit 5
    my_bitset.reset(10); // Resetting bit 10

    // Printing the modified bitset
    std::cout << "Modified bitset in integer format: ";
    my_bitset.print();

    std::cout << "Modified bitset in binary format : ";
    my_bitset.print_binary();

    std::cout << "Number of set bits: " << my_bitset.count() << std::endl;

    // Check if all bits are set to true
    if (my_bitset.all()) {
        std::cout << "All bits are set to true." << std::endl;
    } else {
        std::cout << "Not all bits are set to true." << std::endl;
    }

    // Check if any bit is set to true
    if (my_bitset.any()) {
        std::cout << "At least one bit is set to true." << std::endl;
    } else {
        std::cout << "No bits are set to true." << std::endl;
    }

    // Check if none of the bits are set to true
    if (my_bitset.none()) {
        std::cout << "None of the bits are set to true." << std::endl;
    } else {
        std::cout << "At least one bit is set to true." << std::endl;
    }

    // Using the copy constructor
    Bitset copied_bitset = my_bitset;

    // Using the move constructor
    Bitset moved_bitset = std::move(my_bitset);

    // Print the contents of the copied and moved Bitset objects in binary format
    std::cout << "Copied Bitset in binary format: ";
    copied_bitset.print_binary();

    std::cout << "Moved Bitset in binary format: ";
    moved_bitset.print_binary();

    // Copy assignment operator 
    Bitset assigned_bitset(40);
    assigned_bitset = copied_bitset;

    // Move assignment operator 
    Bitset moved_assigned_bitset(60);
    moved_assigned_bitset = std::move(moved_bitset);

    // Print the contents of the assigned and moved_assigned Bitset objects in binary format
    std::cout << "Assigned Bitset in binary format: ";
    assigned_bitset.print_binary();

    std::cout << "Moved Assigned Bitset in binary format: ";
    moved_assigned_bitset.print_binary();

}