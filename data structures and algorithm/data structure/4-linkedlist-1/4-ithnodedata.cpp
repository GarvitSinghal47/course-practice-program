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
int idata(Node *head, int i)
{

    int count = 0;
    Node *temp = head;

    if(i==0)
    {
        
        return head->data;

    }
    while (temp != NULL && count < i )
    {
        count++;
        temp = temp->next;
    }
    if (temp != NULL)
    {
         return temp->data;
    }
    
}
int main()
{
    Node *head = takeinput();
    print(head);
    int i ;
    cin >> i;
 int ans=  idata(head, i);
   cout<<ans;
    
}