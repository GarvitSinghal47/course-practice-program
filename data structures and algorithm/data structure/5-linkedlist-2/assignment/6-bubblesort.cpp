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
int len(Node *head)
{
    Node *temp = head;
    int i = 0;
    while (temp != NULL)
    {
        i++;
        temp = temp->next;
    }

    return i;
}

Node *bubble_sort_LinkedList_itr(Node *head)
{
    int n = len(head) - 1;

    while (n--)

    {
        Node *prev = NULL;
        Node *cur = head;
        while (cur->next != NULL)
        {
            if (cur->data >= cur->next->data)
            {

                if (prev == NULL)
                {
                    //first Node
                    Node *nxt = cur->next;
                    cur->next = nxt->next;
                    nxt->next = cur;
                    prev = nxt;
                    head = prev;
                }

                else
                {

                    Node *nxt = cur->next;
                    prev->next = nxt;
                    cur->next = nxt->next;
                    nxt->next = cur;
                    prev = nxt;
                }
            }
            else
            {

                prev = cur;
                cur = cur->next;
            }
        }
    }

    return head;
}
int main()
{
    Node *head = takeinput();

    print(head);

    Node *ans = bubble_sort_LinkedList_itr(head);
    print(ans);
}