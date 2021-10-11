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
    if (head == NULL || head->next == NULL)
        return head;
    if (head->data == head->next->data)
    {
        Node *temp = head;
        head = head->next;
        temp->next = NULL;
        delete temp;
        return removeduplicate(head);
    }
    else
    {
        head->next = removeduplicate(head->next);
        
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