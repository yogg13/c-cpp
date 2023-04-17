#include <iostream>

using namespace std;

// Double Linked List
struct Node
{
    string name;
    int nim;

    Node *prev;
    Node *next;
};

Node *node1, *node2, *newNode, *head, *tail, *it1;

void resultAll(Node *paramHead)
{
    while (paramHead != NULL)
    {
        cout << "Nama: " << paramHead->name << endl;
        cout << "NIM: " << paramHead->nim << endl;
        cout << endl;

        paramHead = paramHead->next;
    }
}

void addFirst(string paramName, int paramNumb)
{
    newNode = new Node();

    newNode->name = paramName;
    newNode->nim = paramNumb;
    newNode->prev = NULL;
    newNode->next = head;
    head->prev = newNode;
    head = newNode;
}

void addLast(string paramName, int paramNumb)
{
    newNode = new Node();

    newNode->name = paramName;
    newNode->nim = paramNumb;
    newNode->prev = tail;
    newNode->next = NULL;
    tail->next = newNode;
    tail = newNode;
}

void addMid(string paramName, int paramNumb, int pos)
{
    it1 = head;
    newNode = new Node();

    newNode->name = paramName;
    newNode->nim = paramNumb;

    for (int x = 1; x < pos - 1; x++)
    {
        it1 = it1->next;
    }
    newNode->next = it1->next;
    it1->next = newNode;
    newNode->prev = it1;
}

int main()
{

    node1 = new Node();
    node2 = new Node();

    head = node1;

    node1->name = "Yoga";
    node1->nim = 13579;
    node1->prev = NULL;
    node1->next = node2;

    node2->name = "Pratama";
    node2->nim = 24680;
    node2->prev = node1;
    node2->next = NULL;

    tail = node2;

    // cout << "Data Mahasiswa: " << endl;
    // resultAll(head);
    // cout << endl;

    // cout << "Insert First Node: " << endl;
    addFirst("Eka", 12345);
    // resultAll(head);
    // cout << endl;

    // cout << "Insert Last Node: " << endl;
    addLast("Alvian", 67890);
    // resultAll(head);
    // cout << endl;

    cout << "Insert Mid Node: " << endl;
    addMid("Cakpur", 54321, 4);
    resultAll(head);
    cout << endl;

    return 0;
}