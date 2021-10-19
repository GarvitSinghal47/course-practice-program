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

Node* reversell(Node *head)
{
    Node*prev=NULL;
    Node*current=head;
    Node*next=head->next;
 
    while(current!=NULL)
    {
        current->next=prev;
        prev=current;
        current=next;
        if(next!=NULL)
        {next=next->next;}

    }
    
  

    return prev;
  
}

int main()
{
    Node *head = takeinput();
    print(head);

   Node *head2= reversell(head);
   print (head2);

}