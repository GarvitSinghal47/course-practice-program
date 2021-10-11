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
        Node *newNode = new Node(data);
        if (head == NULL)
        {
            head = newNode;
            tail = newNode;
        }
        else
        {

            tail->next = newNode;
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
    cout << "NULL" << endl;
}

Node *removeduplicate(Node *head)
{
    Node *p = head->next, *q = head;
    while (p)
    {
        if (p->data == q->data)
        {
            q->next = p->next;
            
            p = p->next;
           
        }
        else
        {
            q = q->next;
            p = p->next;
        }
    }
    return head;
}


int main()
{
    int t;
    cin >> t;

    for (int i = 0; i < t; i++)
    {

        Node *head = takeinput();

        Node *ans = removeduplicate(head);
        print(ans);
        cout
            << endl;
    }
}