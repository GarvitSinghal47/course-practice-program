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
Node *deletenode(Node *head, int i)
{

    if (i == 0)
    {
        
     head=head->next;
        
        return head;
    }

    if (head == NULL || i < 0)
      {  return head;}

    head->next = deletenode(head->next, i - 1);

    return head;
}

int main()
{
    Node *head = takeinput();
    print(head);
    int i;
    cin >> i ;
    deletenode(head, i);
    print(head);
}