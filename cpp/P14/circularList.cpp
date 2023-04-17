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
    Node *head = temp;
    // while (temp != head)
    // {
    //     cout << temp->value;
    //     temp = temp->next;
    // };
    do
    {
        cout << temp->value;
        temp = temp->next;
    } while (temp != head);
}

void insertFirst(Node **ptrHead, int isi)
{
    Node *newNode = (Node *)malloc(sizeof(Node));
    newNode->value = isi;

    Node *temp = *ptrHead;
    do
    {
        temp = temp->next;
    } while (temp->next != *ptrHead);

    newNode->next = *ptrHead;
    *ptrHead = newNode;

    temp->next = *ptrHead;
};

void insertLast(Node *temp, int isi)
{
    Node *newNode = (Node *)malloc(sizeof(Node));
    newNode->value = isi;
    newNode->next = temp;

    Node *head = temp;

    do
    {
        temp = temp->next;
    } while (temp->next != head);

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

    Node *temp = *ptrHead;
    do
    {
        temp = temp->next;
    } while (temp->next != *ptrHead);

    temp->next = trash->next;
    *ptrHead = trash->next;
    trash->next = NULL;
}

void deleteLast(Node *temp)
{
    Node *head = temp;
    Node *temp2;

    do
    {
        temp2 = temp;
        temp = temp->next;
    } while (temp->next != head);

    temp2->next = head;
    temp->next = NULL;
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
    Node *one = NULL;
    Node *two = NULL;
    Node *three = NULL;

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
    three->next = one;

    /* Save address of first node in head */
    head = one;
    cout << "initialize List: ";
    printAll(head);

    insertFirst(&head, 4);
    cout << endl
         << "Insert First: ";
    printAll(head);

    // insertlast
    insertLast(head, 5);
    cout << endl
         << "Insert Last: ";
    printAll(head);

    insertAfter(head, 6, 3);
    cout << endl
         << "Insert After: ";
    printAll(head);

    deleteFirst(&head);
    cout << endl
         << "Delete First: ";
    printAll(head);

    deleteLast(head);
    cout << endl
         << "Delete Last: ";
    printAll(head);

    deleteAfter(head, 2);
    cout << endl
         << "Delete After: ";
    printAll(head);
}
