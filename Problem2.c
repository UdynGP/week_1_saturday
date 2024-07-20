/*
Problem Statement - Given two sorted linked lists consisting of N and M nodes respectively. In which you have to merge two objects and return a single objects.
For example -:
Input: arr1= [3,4,8,12], arr2= [1,6,15,19]
Output: [1,3,4,6,8,12,15,19]
*/

#include <stdio.h>
#include <stdlib.h>

// Linked list node
struct Node
{
    int key;
    struct Node *next;
};

// Create a new node
struct Node *newNode(int key)
{
    struct Node *temp = (struct Node *)malloc(sizeof(struct Node));
    temp->key = key;
    temp->next = NULL;
    return temp;
}

// Merge two sorted linked lists
struct Node *mergeSortedLists(struct Node *a, struct Node *b)
{
    struct Node dummy;          // Dummy node to start the merged list
    struct Node *tail = &dummy; // Pointer to the last node of the merged list

    while (1)
    {
        if (a == NULL)
        {
            tail->next = b;
            break;
        }
        if (b == NULL)
        {
            tail->next = a;
            break;
        }

        if (a->key <= b->key)
        {
            tail->next = a;
            a = a->next;
        }
        else
        {
            tail->next = b;
            b = b->next;
        }
        tail = tail->next;
    }

    return dummy.next; // Head of the merged list
}

// Example usage
int main()
{
    struct Node *a = newNode(3);
    a->next = newNode(4);
    a->next->next = newNode(8);
    a->next->next->next = newNode(12);

    struct Node *b = newNode(1);
    b->next = newNode(6);
    b->next->next = newNode(15);
    b->next->next->next = newNode(19);

    struct Node *result = mergeSortedLists(a, b);

    printf("Resultant Merge Linked List Is:\n");
    while (result != NULL)
    {
        printf("%d ", result->key);
        result = result->next;
    }

    return 0;
}