#include <stdc++.h>
using namespace std;

class node
{
public:
    int data;
    node *next;

    node(int val)
    {
        data = val;
        next = NULL;
    }
};

void InsertAtHead(node *&head, int val)
{
    node *n = new node(val);
    if (head == NULL)
    {
        head = n;
        return;
    }

    node *temp = head;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = n;
}

void Display_list(node *head)
{
    node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << "->";
        temp = temp->next;
    }
}

/*void Delet()*/

int main()
{
    node *head = NULL;
    InsertAtHead(head, 1);
    InsertAtHead(head, 2);
    InsertAtHead(head, 3);
    InsertAtHead(head, 4);
    Display_list(head);
    return 0;
}