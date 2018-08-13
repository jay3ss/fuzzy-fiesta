// Lesson on recursion
// Taken from https://www.cprogramming.com/tutorial/lesson16.html
// The doll() function prints out its argument size and recursively
// calls itself with the argument size - 1 until it reaches 0.
#include <iostream>

void doll(int size) // each call gets its own count
{
    std::cout << size << std::endl;
    if (size == 0)      // No doll can be smaller than 1 atom (10^0) so it
    {                   // doesn't call itself.
        return;         // Doesn't have to return something, it can be used to 
    }                   // exit a function
    doll(size - 1);     // Decrements the size variable so the next doll is smaller
}

int main()
{
    doll(30);
}
