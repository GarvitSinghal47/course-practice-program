

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
class Pair
{

public:
    int minimum;
    int maximum;
    bool bst;
};
#include <iostream>
#include <cmath>
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

bool BST(binarytreenode<int> *root,  int min = INT8_MIN,int max = INT8_MAX)
{
    if (root == NULL)
    {
        return true;
    }
    if (root->data < min || root->data > max)
    {
        return false;
    }
    bool isleftok = BST(root->left, min, root->data - 1);
    bool isrightok = BST(root->right, root->data, max);

    return isleftok && isrightok;
}

int main()
{
    binarytreenode<int> *ans = takeinputlevelwise();
    printLevelWise(ans);
    bool ans1 = BST(ans);
    cout << ans1;
}