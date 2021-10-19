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
    cout << "NULL";
    cout << endl;
}

Node *swap_nodes(Node *head, int i, int j)
{
    //write your code here
    Node *p = head, *q = head;

    for (int index = 0; index < i; index++)
    {
        p = p->next;
    }
    for (int index = 0; index < j; index++)
    {
        q = q->next;
    }

    int x = p->data;
    p->data = q->data;
    q->data = x;

    return head;
}
int main()
{

    Node *head = takeinput();
    int M, N;
    cin >> M>>N;
    print(head);

    Node* ans = swap_nodes(head,M,N);
    print(ans);
}