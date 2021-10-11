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
        cout << temp->data;
        temp = temp->next;
    }
    cout << endl;
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

Node *reverse(Node *head2)
{
    Node *p = head2, *q = NULL, *r = NULL;
    while (p)
    {
        r = q;
        q = p;
        p = p->next;
        q->next = r;
    }
    head2 = q;
    return q;
}

bool check_palindrome(Node *head)
{
    if(head==NULL)
    {
        return true;
    }
    //write your code here
    Node *p = head;
    int x = length(head) / 2;

    for (int i = 1; i < x; i++)
    {
        p = p->next;
    }
    Node *head2 = p->next;
    p->next = NULL;
    head2 = reverse(head2);

    while (head && head2)
    {
        if (head->data != head2->data)
            return false;
        head = head->next;
        head2 = head2->next;
    }
    return true;
}

int main()
{
    int t;
    cin >> t;

    for (int i = 0; i < t; i++)
    {

        Node *head = takeinput();

        if (check_palindrome(head))
        {
            cout << "true"<<endl;
        }
        else
        {
            cout << "false" << endl;
        }
       
    }
}