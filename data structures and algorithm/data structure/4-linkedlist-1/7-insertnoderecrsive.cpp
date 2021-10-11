#include <iostream>
class Node
{
public:
    int data;
    Node *next;

    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
};
using namespace std;

Node *takeinput()
{

    int data;
    cin >> data;
    Node *head = NULL, *tail = NULL;
    while (data != -1)
    {
        Node *newnode = new Node(data);
        if (head == NULL)
        {
            head = newnode;
            tail = newnode;
        }
        else
        {

            tail->next = newnode;
            tail = tail->next;
        }
        cin >> data;
    }
    return head;
}
void print(Node *head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << "->";
        temp = temp->next;
    }
    cout << "NULL";
    cout << endl;
}
Node *insertnode(Node *head, int i, int data)
{

    if (i == 0)
    {
        Node *p = new Node(data);
        p->next = head;
        head = p;
        return p;
    }

    if (head == NULL || i < 0)
      {  return head;}

    head->next = insertnode(head->next, i - 1, data);

    return head;
}

int main()
{
    Node *head = takeinput();
    print(head);
    int i, data;
    cin >> i >> data;
    insertnode(head, i, data);
    print(head);
}