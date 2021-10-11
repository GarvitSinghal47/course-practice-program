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
int index(Node *head,int input)
{
    Node *temp=head;
    int count = 0;
    while(temp!=NULL)
    {
    if (temp->data==input)
    {
         return count;
     
       
    }
     temp = temp->next;
       count++;
    }
    //this -1 is sent when the whole linked list is checked but the element needed is not present in the linked list.
    return -1;
   
}

int main()
{
    int t;
    int input;
    cin >> t;
    for (int i = 0; i < t; i++)
    {

        Node *head = takeinput();
        cin>>input;
        cout<<index(head,input);
       
        cout<<endl;
    }
}