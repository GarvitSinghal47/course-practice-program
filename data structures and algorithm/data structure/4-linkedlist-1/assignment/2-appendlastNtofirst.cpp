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

int length(Node *head)
{

    int count = 0;
    while (head)
    {
        count++;
        head = head->next;
    }
    return count;
}
Node *appendlast(Node *head, int n)
{
    //write your code here
    Node *p = head;
    Node *q = head;
    for (int i = 1; i < length(head) - n; i++)
    {
        p = p->next;
    }
    for (int i = 1; i < length(head); i++)
    {
        q = q->next;
    }
    q->next = head; //circular LL
    head = p->next;
    p->next = NULL; //breaking that circular LL

    return head;
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

        Node *ans = appendlast(head, data);
        print(ans);
        cout
            << endl;
    }
}