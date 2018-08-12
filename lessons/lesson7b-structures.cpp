// This lesson demonstrates how to use a pointer with a struct
// Taken from https://www.cprogramming.com/tutorial/lesson7.html
#include <iostream>

struct xampl {
    int x;
};


int main()
{
    xampl structure;
    xampl *ptr;

    structure.x = 12;
    ptr = &structure;               // You need the & when dealing with structures and
                                    // using pointers to them
    std::cout << ptr->x << "\n";    // The -> acts somewhat like the * when used with
                                    // It says, "get whatever is at that memory address"
                                    // Not, "get what that memory address is."
    std::cin.get();
}
