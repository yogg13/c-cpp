#include <iostream>
#include <cstdlib>
using namespace std;

struct Node
{
    int value;
    Node *next;
};

void printAll(Node *temp)
{
    while (temp != NULL)
    {
        cout << temp->value;
        temp = temp->next;
    }
}

void insertFirst(Node **ptrHead, int isi)
{
    Node *newNode = (Node *)malloc(sizeof(Node));
    newNode->value = isi;

    newNode->next = *ptrHead;
    *ptrHead = newNode;
};

void insertLast(Node *temp, int isi)
{
    Node *newNode = (Node *)malloc(sizeof(Node));
    newNode->value = isi;
    newNode->next = NULL;

    while (temp->next != NULL)
    {
        temp = temp->next;
    }

    temp->next = newNode;
};

void insertAfter(Node *temp, int isi, int setelah)
{
    Node *newNode = (Node *)malloc(sizeof(Node));
    newNode->value = isi;

    for (int i = 1; i < setelah; i++)
    {
        temp = temp->next;
    }

    newNode->next = temp->next;
    temp->next = newNode;
}

void deleteFirst(Node **ptrHead)
{
    Node *trash;
    trash = *ptrHead;
    *ptrHead = trash->next;
    trash->next = NULL;
}

void deleteLast(Node *temp)
{
    Node *temp2;
    while (temp->next != NULL)
    {
        temp2 = temp;
        temp = temp->next;
    }
    temp2->next = NULL;
}

void deleteAfter(Node *temp, int setelah)
{
    Node *temp2;
    for (int i = 0; i < setelah; i++)
    {
        temp2 = temp;
        temp = temp->next;
    }

    temp2->next = temp->next;
    temp->next = NULL;
}

int main()
{
    /* Initialize nodes */
    Node *head;
    Node *one;
    Node *two;
    Node *three;

    /* Allocate memory */
    one = (Node *)malloc(sizeof(Node));
    two = (Node *)malloc(sizeof(Node));
    three = (Node *)malloc(sizeof(Node));

    /* Assign data values */
    one->value = 1;
    two->value = 2;
    three->value = 3;

    /* Connect nodes */
    one->next = two;
    two->next = three;
    three->next = NULL;

    /* Save address of first node in head */
    head = one;
    cout << "initialize List: ";
    printAll(head);
    cout << endl;

    insertFirst(&head, 4);
    cout << endl
         << "Insert First: ";
    printAll(head);
    cout << endl;

    // insertlast
    insertLast(head, 5);
    cout << endl
         << "Insert Last: ";
    printAll(head);
    cout << endl;

    insertAfter(head, 6, 3);
    cout << endl
         << "Insert After: ";
    printAll(head);
    cout << endl;

    deleteFirst(&head);
    cout << endl
         << "Delete First: ";
    printAll(head);
    cout << endl;

    deleteLast(head);
    cout << endl
         << "Delete Last: ";
    printAll(head);
    cout << endl;

    deleteAfter(head, 2);
    cout << endl
         << "Delete After: ";
    printAll(head);
}
