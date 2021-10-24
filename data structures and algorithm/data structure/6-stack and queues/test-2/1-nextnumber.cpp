
#include <iostream>

using namespace std;
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

Node *NextLargeNumber(Node *head)
{

    if (head->next == NULL)
    {
        if (head->data == 9)
        {
            head->data = 0;
            Node *x = new Node(1);

            x->next = head;
            head = x;
        }
        else
            head->data++;

        return head;
    }
    Node *pn = NextLargeNumber(head->next);
    //for 9 it will check if the answer returning is 10.
    //it will create a temporary chain which is connected to the  previous head as well as a temporary  one head is also created which is deleted after the calculation.
    if (head->next->data == 0 && pn->data == 1)
    {
        if (head->data == 9)
        {
            head->data = 0;
            Node *x = new Node(1);

            x->next = head;
            head = x;
        }
        else
            head->data++;

        delete pn;
        return head;
    }

    else
    {
        return head;
    }
}

int main()
{

    Node *head = takeinput();
    print(head);

     Node *ans = NextLargeNumber(head);
   
    print(ans);
}
