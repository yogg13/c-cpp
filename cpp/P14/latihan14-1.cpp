#include <iostream>

using namespace std;

// Single Linked List
struct Node
{
    string nameValue;

    Node *next;
};

Node *name1, *name2, *head, *tail, *trash, *newNode, *it1, *it2;

void resultAll(Node *paramHead)
{
    while (paramHead != NULL)
    {
        cout << "> " << paramHead->nameValue << endl;
        paramHead = paramHead->next;
    }

    // do
    // {
    //     cout << "> " << paramHead->nameValue << endl;
    //     paramHead = paramHead->next;
    // } while (paramHead != head);
}

void addFirst(string paramName)
{
    newNode = new Node();
    newNode->nameValue = paramName;
    newNode->next = head;
    // tail->next = newNode;
    head = newNode;
}

void addLast(string paramName)
{
    newNode = new Node();
    newNode->nameValue = paramName;
    newNode->next = NULL;

    tail->next = newNode;
    tail = newNode;
}

void addMid(string paramName, int pos)
{
    it1 = head;
    newNode = new Node();
    newNode->nameValue = paramName;

    for (int x = 1; x < pos - 1; x++)
    {
        it1 = it1->next;
    }

    newNode->next = it1->next;
    it1->next = newNode;
}

void trashFirst()
{
    trash = head;
    head = head->next;

    delete trash;
}

void trashLast()
{

    trash = tail;
    it1 = head;

    while (it1->next != tail)
    {
        it1 = it1->next;
    }
    tail = it1;
    tail->next = NULL;

    delete trash;
}

void trashMid(int pos)
{
    it1 = head;
    it2 = head;

    for (int x = 1; x < pos; x++)
    {
        it1 = it1->next;
    }
    trash = it1;

    while (it2->next != trash)
    {
        it2 = it2->next;
    }
    it2->next = trash->next;

    delete trash;
}

void changeFirst(string paramName)
{
    head->nameValue = paramName;
}

void changeLast(string paramName)
{
    tail->nameValue = paramName;
}

void changeMid(string paramName, int pos)
{
    it1 = head;

    for (int x = 1; x < pos; x++)
    {
        it1 = it1->next;
    }
    it1->nameValue = paramName;
}

int main()
{
    name1 = new Node();
    name2 = new Node();

    head = name1;

    name1->nameValue = "Budi";
    name1->next = name2;

    name2->nameValue = "Udin";
    name2->next = NULL;

    tail = name2;

    cout << "Value Node Temp: " << endl;
    resultAll(head);
    cout << endl;

    cout << "=> Insert First Node: " << endl;
    addFirst("yoga");
    resultAll(head);
    cout << endl;

    cout << "=> Insert Last Node: " << endl;
    addLast("Pratama");
    resultAll(head);
    cout << endl;

    // cout << "=> Insert Mid Node: " << endl;
    // addMid("Yoyoo", 3);
    // resultAll(head);
    // cout << endl;

    // cout << "=> Delete First Node: " << endl;
    // trashFirst();
    // resultAll(head);
    // cout << endl;

    // cout << "=> Delete Mid Node: " << endl;
    // trashMid(3);
    // resultAll(head);
    // cout << endl;

    // cout << "=> Delete Last Node: " << endl;
    // trashLast();
    // resultAll(head);
    // cout << endl;

    // cout << "=> Change First Node: " << endl;
    // changeFirst("Eka");
    // resultAll(head);
    // cout << endl;

    // cout << "=> Change Last Node: " << endl;
    // changeLast("Joko");
    // resultAll(head);
    // cout << endl;

    // cout << "=> Change Mid Node: " << endl;
    // changeMid("Rizky", 3);
    // resultAll(head);
    // cout << endl;

    return 0;
}