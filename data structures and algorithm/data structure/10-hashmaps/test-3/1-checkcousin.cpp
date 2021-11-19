

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
    bool checkcousin;
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
bool isSibling(binarytreenode<int> *root, int data_one,
               int data_two)
{
    if (!root)
        return false;

    // Compare the two given nodes with
    // the childrens of current node
    if (root->left && root->right)
    {
        int left = root->left->data;
        int right = root->right->data;

        if (left == data_one && right == data_two)
            return true;
        else if (left == data_two && right == data_one)
            return true;
    }

    // Check for left subtree
    if (root->left)
        isSibling(root->left, data_one,
                  data_two);

    // Check for right subtree
    if (root->right)
        isSibling(root->right, data_one,
                  data_two);
}

// Recursive function to find level of Node 'ptr' in a binary tree
int level(binarytreenode<int> *root, int ptr, int lev)
{
    // base cases
    if (root == NULL)
        return 0;
    if (root->data == ptr)
        return lev;

    // Return level if Node is present in left subtree
    int l = level(root->left, ptr, lev + 1);
    if (l != 0)
        return l;

    // Else search in right subtree
    return level(root->right, ptr, lev + 1);
}

// Returns 1 if a and b are cousins, otherwise 0
bool isCousin(binarytreenode<int> *root, int a, int b)
{
    //1. The two Nodes should be on the same level in the binary tree.
    //2. The two Nodes should not be siblings (means that they should
    // not have the same parent Node).
    if ((level(root, a, 1) == level(root, b, 1)) && !(isSibling(root, a, b)))
        return true;
    else
        return false;
}

int main()
{
    binarytreenode<int> *ans = takeinputlevelwise();
    int x, y;
    cin >> x >> y;
    printLevelWise(ans);
    bool ans1 = isCousin(ans,x,y);
    cout << ans1;
}