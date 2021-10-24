
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

Node *deletealternative(Node *head)
{
    Node *final = head;
    Node *current = head->next;
    Node *prev = head;
    if (head == NULL || head->next == NULL)
    {
        return head;
    }
    
  
    while (prev->next != NULL)
    {
        if (current->next == NULL && prev->next->next == NULL)
        {
            prev->next = NULL;
            return final;
        }
        
        prev->next = current->next;
            current = current->next->next;
            prev = prev->next;
        
    }
    
    return final;
}

int main()
{

    Node *head = takeinput();
    print(head);

    Node *ans = deletealternative(head);

    print(ans);
}
