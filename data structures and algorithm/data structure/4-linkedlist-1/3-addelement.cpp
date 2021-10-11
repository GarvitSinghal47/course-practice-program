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
Node* insertnode(Node *head, int i, int data)
{
    Node *newnode = new Node(data);
    int count = 0;
    Node *temp = head;

    if(i==0)
    {
        newnode->next=head;
        head=newnode;
        return head;

    }
    while (temp != NULL && count < i - 1)
    {
        count++;
        temp = temp->next;
    }
    if (temp != NULL)
    {
        Node *a = temp->next;

        temp->next = newnode;

        newnode->next = a;
    }
    return head;
}
int main()
{
    Node *head = takeinput();
    print(head);
    int i, data;
    cin >> i >> data;
 head=  insertnode(head, i, data);
   print(head);
    
}