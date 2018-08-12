// This lesson creates an 8x8 multiplication table using a 2d array
// Taken from https://www.cprogramming.com/tutorial/lesson8.html
#include <iostream>


int main()
{
    int x;
    int y;
    int array[8][8];        // Declares an array like a chessboard

    for (x = 0; x < 8; x++)
    {
        for (y = 0; y < 8; y++)
        {
            array[x][y] = x * y;
        }
    }
    std::cout << "Array Indices:\n";
    for (x = 0; x < 8; x++)
    {
        for (y = 0; y < 8; y++)
        {
            std::cout << "[" << x <<"]=" << array[x][y] << " ";
        }
        std::cout << "\n";
    }
}
