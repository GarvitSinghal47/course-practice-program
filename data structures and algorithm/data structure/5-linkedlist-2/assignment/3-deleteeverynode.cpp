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

Node *skipMdeleteN(Node *head, int M, int N)
{

    if (M == 0)
        return NULL; // edge case  not a base case

    //base case
    if (head == NULL || head->next == NULL)
    {
        return head;
    }

    Node *temp = head;
    int count1 = 0;
    int count2 = 0;
    while (temp->next != NULL && count1 < M - 1) //travel M nodes
    {
        count1++;
        temp = temp->next;
    }
    //t1 will point at the M th character
    Node *t1 = temp;
    // t1=temp;
    //it is done to shift it to deletion series of n.
    temp = temp->next;
    if (temp == NULL)
        return head;

    while (temp->next != NULL && count2 < N - 1)
    {
        count2++;
        temp = temp->next;
    }

    Node *t2;
    t2 = temp->next;

    Node *m = skipMdeleteN(t2, M, N);
    //this will connect the chain created after recursive call
    t1->next = m;
    return head;
}
int main()
{
    Node *head = takeinput();

    
    //is the index from where the deletion has to be done
    int place;
    //is the no of index after the place to be removed 
    int placeupto;
    cin >> place >> placeupto;
    print(head);
    Node *ans = skipMdeleteN(head, place, placeupto);
    print(ans);
}