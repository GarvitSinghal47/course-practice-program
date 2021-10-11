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
        cout << temp->data;
        temp = temp->next;
    }
    cout << endl;
}
int findnode(Node *head, int data, int t)
{

    if (head == NULL )
    {
        return -1;
    }
    int count = 0;
    while (head)
    {
        if (head->data == data)
        {
            return count;
        }
        
        head = head->next;
        count++;
    }
    return -1;
}

int main()
{
    int t;
    cin >> t;
    
    for (int i = 0; i < t; i++)
    {

        Node *head = takeinput();
        int data;
        cin >> data;

        int ans= findnode(head, data, t);
        cout << ans;
        cout << endl;
    }
}