// Playing around with a linked list. Let's see how to create a linked list with
// mulitple nodes
// Taken from https://www.cprogramming.com/tutorial/lesson15.html
#include <iostream>

struct node
{
    int x;
    node *next;
};


int main()
{
    node *conductor;            // This will point to each node as it traverses 
                                // the list
    // Create the nodes
    node *node1;
    node *node2;
    node *node3;
    node *node4;
    node *node5;

    // Allocate memory and initialze structs
    node1 = new node;
    node2 = new node;
    node3 = new node;
    node4 = new node;
    node5 = new node;

    // Give each node some data
    node1->x = 1;
    node2->x = 2;
    node3->x = 3;
    node4->x = 4;
    node5->x = 5;

    // Connect the nodes
    conductor = node1;
    node1->next = node2;
    node2->next = node3;
    node3->next = node4;
    node4->next = node5;
    node5->next = 0;


    if (conductor != 0)
    {
        std::cout << "Traversing the linked list" << std::endl;
        while (conductor->next != 0)
        {
            std::cout << conductor->x << std::endl;
            conductor = conductor->next;
        }
    }
    std::cout << conductor->x << std::endl;
}
