// Lesson on linked lists
// Taken from https://www.cprogramming.com/tutorial/lesson15.html
// Think of a linked list as a train, although this isn't completely accurate.
// Each entry in the list is the node and the connection between each node is
// a pointer. The last node's pointer is NULL because there's nothing behind it
#include <iostream>

struct node
{
    int x;
    node *next;
};


int main()
{
    node *root;                 // This won't change, or we would lose the list in
                                // in memory
    node *conductor;            // This will point to each node as it traverses 
                                // the list
    root = new node;            // Sets it to actually point to something
    root->next = 0;             // other wise it would not work well
    root->x = 12;
    conductor = root;           // The conductor points to the first node

    if (conductor != 0)
    {
        std::cout << "Traversing the linked list" << std::endl;
        while (conductor->next != 0)
        {
            std::cout << conductor->x << std::endl;
            conductor = conductor->next;
        }
    }
    conductor->next = new node;     // Creates a node at the end of the list
    conductor = conductor->next;    // Points to that node
    conductor->next = 0;            // Prevents it from going any further
    conductor->x = 42;
    std::cout << conductor->x << std::endl;
}
