
#include <iostream>
template <typename T>
class binarytreenode
{
public:
    T data;
    binarytreenode *left;
    binarytreenode *right;

    binarytreenode(T data)
    {
        this->data = data;

        right = NULL;
        left = NULL;
    }
    ~binarytreenode()
    {
        delete left;
        delete right;
    }
};
#include <iostream>
#include <queue>
using namespace std;

binarytreenode<int> *takeinputlevelwise()
{
    int rootdata;
    cout << "enter root data" << endl;
    cin >> rootdata;
    if (rootdata == -1)
    {
        return NULL;
    }
    binarytreenode<int> *root = new binarytreenode<int>(rootdata);
    queue<binarytreenode<int> *> pendingnodes;
    pendingnodes.push(root);
    while (pendingnodes.size() != 0)
    {
        binarytreenode<int> *front = pendingnodes.front();
        pendingnodes.pop();
        cout << "left child of " << front->data << endl;
        int leftchilddata;
        cin >> leftchilddata;
        if (leftchilddata != -1)
        {
            binarytreenode<int> *child = new binarytreenode<int>(leftchilddata);
            front->left = child;
            pendingnodes.push(child);
        }
        cout << "right child of " << front->data << endl;
        int rightchilddata;
        cin >> rightchilddata;
        if (rightchilddata != -1)
        {
            binarytreenode<int> *child = new binarytreenode<int>(rightchilddata);
            front->right = child;
            pendingnodes.push(child);
        }
    }
    return root;
}
void printLevelWise(binarytreenode<int> *root)
{

    if (!root)
        return;

    queue<binarytreenode<int> *> pn;
    pn.push(root);

    while (!pn.empty())
    {
        binarytreenode<int> *front = pn.front();
        pn.pop();
        cout << front->data << ":";

        if (front->left)
        {
            pn.push(front->left);
            cout << "L:" << front->left->data;
        }
        else
            cout << "L:-1";

        cout << ",";

        if (front->right)
        {
            pn.push(front->right);
            cout << "R:" << front->right->data << endl;
        }
        else
            cout << "R:-1" << endl;
    }
}

#include <stack>
    int countnodes(binarytreenode<int> *root)
{
    if (root == NULL)
        return 0;

    return 1 + countnodes(root->left) + countnodes(root->right);
}
//to know how this pushing procedure is done using stack,see the stack series lecture 51,52 of striver series .
void printNodesSumToS(binarytreenode<int> *root, int s)
{

    int totalnodes = countnodes(root);
    int count = 0;

//in stack the max no of element that can be present in both stack can be equal to the height of the stack so the space complexity will be log(n )
    stack<binarytreenode<int> *> inorder;
    stack<binarytreenode<int> *> revinorder;

    binarytreenode<int> *temp = root;

    while (temp)
    {
        inorder.push(temp);

        temp = temp->left;
    }
    temp = root;
    while (temp)
    {
        revinorder.push(temp);

        temp = temp->right;
    }

    while (count < totalnodes - 1)
    {
        binarytreenode<int> *top1 = inorder.top();
        binarytreenode<int> *top2 = revinorder.top();
        if (top1->data + top2->data == s)
        {
            cout << top1->data << " " << top2->data << endl;

            binarytreenode<int> *top = top1;
            inorder.pop();
            count++;
            if (top->right)
            {
                top = top->right;
                while (top)
                {
                    inorder.push(top);
                    top = top->left;
                }
            }
            top = top2;
            revinorder.pop();
            count++;
            if (top->left)
            {
                top = top->left;
                while (top)
                {
                    revinorder.push(top);
                    top = top->right;
                }
            }
        }
        else if (top1->data + top2->data > s)
        {
            binarytreenode<int> *top = top2;
            revinorder.pop();
            count++;
            if (top->left)
            {
                top = top->left;
                while (top)
                {
                    revinorder.push(top);
                    top = top->right;
                }
            }
        }
        else
        {
            binarytreenode<int> *top = top1;
            inorder.pop();
            count++;
            if (top->right)
            {
                top = top->right;
                while (top)
                {
                    inorder.push(top);
                    top = top->left;
                }
            }
        }
    }
}

int main()
{
    binarytreenode<int> *ans = takeinputlevelwise();
    int k;
    cin >> k;

    printLevelWise(ans);

    printNodesSumToS(ans, k);
}
