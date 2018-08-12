// Lesson on file I/O
// Taken from https://www.cprogramming.com/tutorial/lesson10.html
#include <fstream>
#include <iostream>

int main()
{
    std::string str;

    // Create an instance of ofstrea, and opens exmaple.txt
    std::ofstream a_file("example.txt");
    // Outputs to example.txt through a_file
    a_file << "This text will now be inside of example.txt";
    // Close the file explicitly
    a_file.close();
    // Open the file for reading
    std::ifstream b_file("example.txt");
    // Read one string from the file
    b_file >> str;
    //Should output 'this'
    std::cout << str << "\n";
    std::cin.get();
    // b_file is closed implicitly here when program terminates
}
