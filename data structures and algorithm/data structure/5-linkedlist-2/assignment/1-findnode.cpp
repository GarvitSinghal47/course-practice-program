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

int findnode(Node *head,int key)
{
    int count = 0;
    if(head==NULL)
    {
        return NULL;
    }
    Node *temp = head;
    while(head){
    if(head->data==key)
    {
        return count;
    }
    head = head->next;
    count++;
    }
    return -1;
}

int main()
{
    Node *head = takeinput();
    int key;
    cin >> key;
    print(head);

   int ans= findnode(head,key);
   cout << ans;
}