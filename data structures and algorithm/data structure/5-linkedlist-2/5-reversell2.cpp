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
class Pair{
    public:
    Node *head;
    Node *tail;
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

Pair reversell2(Node *head)
{
    if(head==NULL||head->next==NULL)
    {
        Pair ans;
        ans.head=NULL;
        ans.tail=NULL;
        return ans;
    }
    Pair smallans=reversell2(head->next);
    
   
  
    smallans.tail->next=head;
    head->next=NULL;
    Pair ans;
    ans.head=smallans.head;
    ans.tail=head;
    return ans;
  
}
Node*reversellb(Node*head)
{
    return reversell2(head).head;
}

int main()
{
    Node *head = takeinput();
    print(head);

   Node *head2= reversellb(head);
   print (head2);

}