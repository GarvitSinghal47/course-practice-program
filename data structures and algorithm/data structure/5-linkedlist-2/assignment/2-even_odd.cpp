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

Node *arrange_LinkedList(Node *head)
{
    Node *ehead = new Node(0);
    Node *etail = ehead;

    Node *ohead = new Node(0);
    Node *otail = ohead;

    while (head)
    {
        if (head->data % 2 == 0)
        {

            etail->next = head;
            etail = head;
            head = head->next;
            etail->next = NULL;
        }
        else
        {
            otail->next = head;
            otail = head;
            head = head->next;
            otail->next = NULL;
        }
    }
    otail->next = ehead->next;
    return ohead->next;
}

int main()
{
    Node *head = takeinput();

    print(head);

    Node *ans = arrange_LinkedList(head);
    print(ans);
}