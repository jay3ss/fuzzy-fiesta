// This lesson
// Take from https://www.cprogramming.com/tutorial/string.html
// instead of https://www.cprogramming.com/tutorial/lesson9.html
// because the latter deals with C-style strings while the former
// (this one) deals with C++-style strings

#include <iostream>


int main()
{   
    // Instantiating a string with an initial value
    std::string init_val_str("starting value");

    // Get string value from I/O
    std::string cin_str;
    std::cout << "Enter a string >> ";
    std::cin >> cin_str;
    std::cin.ignore();

    // String concatenation
    std::string str1("first string ");
    std::string str2("second string");
    std::string str_concat = str1 + str2;

    // String comparison
    std::string passwd = "abc123";
    std::string passwdUser;
    std::cout << "Enter your password >> ";
    std::getline(std::cin, passwdUser, '\n'); // note that the '\n' is a char

    bool passwdCorrect = passwd == passwdUser;

    // Two ways to get the length of a string
    int str_length = cin_str.length();
    int str_size = cin_str.size();

    // Two ways to iterate throught the contents of a string
    std::cout << "First, iterate just like an array\n";
    for (int i = 0; i < cin_str.length(); i++)
    {
        std::cout << cin_str[i] << "\n";
    }

    std::cout << "Second, strings are sequences so use an iterator\n";
    for (std::string::iterator itr = cin_str.begin(); itr != cin_str.end(); itr++)
    {
        std::cout << *itr << "\n";
    }

    // Print all of the various strings
    std::cout << "init_val_str = " << init_val_str << "\n";
    std::cout << "cin_str = " << cin_str << "\n";
    std::cout << "str_concat = str1 + str2 = " << str_concat << "\n";
    std::cout << "passwd == passwdUser = " << passwdCorrect << "\n";
    std::cout << "cin_str.length() = " << str_length << "\n";
    std::cout << "cin_str.size() = " << str_size << "\n";
}
