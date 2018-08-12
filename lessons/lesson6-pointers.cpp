// Tutorial found at https://www.cprogramming.com/tutorial/lesson6.html
// What's happening:
// 1. Two variables are declared: an integer (x) and a pointer to an integer (*p)
// 2. p* has x's address (&x) assigned to it 
// 3. The user is propmted to assign a value to x
// 4. The value stored at p* is displayed to the user via dereferencing the pointer (*p)
#include <iostream>

int main()
{
    int x;                      // A normal integer
    int *p;                     // A pointer to an integer

    p = &x;                     // Read it as "assign the address of x to p"
    std::cin >> x;              // Put a value in x, we could also use *p here
    std::cin.ignore();
    std::cout << *p << "\n";    // Note the use of the * to get the value
    std::cin.get();
}
