#include <iostream>
using namespace std;
#include <vector>
#include <bits/stdc++.h>

template <typename T>
class TreeNode
{
public:
    T data;
    vector<TreeNode<T> *> children;

    TreeNode(T data)
    {
        this->data = data;
    }

    ~TreeNode()
    {
        for (int i = 0; i < children.size(); i++)
        {
            delete children[i];
        }
    }
};

#include <queue>

TreeNode<int> *takeInputLevelWise()
{
    int rootData;
    cout << "enter root data";
    cin >> rootData;
    TreeNode<int> *root = new TreeNode<int>(rootData);

    queue<TreeNode<int> *> pendingNodes;

    pendingNodes.push(root);
    while (pendingNodes.size() != 0)
    {
        TreeNode<int> *front = pendingNodes.front();
        pendingNodes.pop();
        int numChild;
        cout << "enter the no of childs of " << front->data << endl;
        cin >> numChild;
        for (int i = 0; i < numChild; i++)
        {
            int childData;
            cout << "enter" << i << "th child of " << front->data << endl;
            cin >> childData;
            TreeNode<int> *child = new TreeNode<int>(childData);
            front->children.push_back(child);
            pendingNodes.push(child);
        }
    }
    return root;
}
void printLevelWise(TreeNode<int> *root)
{

    if (root->data == NULL)
        return;

    queue<TreeNode<int> *> pendingnodes;
    pendingnodes.push(root);

    while (pendingnodes.size() != 0)
    {
        TreeNode<int> *front = pendingnodes.front();
        pendingnodes.pop();
        cout << front->data << ":";
        for (int i = 0; i < front->children.size(); i++)
        {
            pendingnodes.push(front->children[i]);
            if (i == front->children.size() - 1)
                cout << front->children[i]->data;

            else
                cout << front->children[i]->data << ",";
        }

        cout << endl;
    }
}
void depth(TreeNode<int> *root, int k)
{

    if (root == NULL)
        return;

    if (k == 0)
    {
        cout << root->data << endl;
    return;
    }

    for (int i = 0; i < root->children.size(); i++)
    {
        depth(root->children[i], k - 1);
    }

}
int numnode(TreeNode<int> *root)
{
   if (root == NULL)
        return 0;
        int ans=1;
        for (int i = 0; i < root->children.size(); i++)
        {
            ans+=numnode(root->children[i]);
        }
        return ans;
        
}
int main()
{

    TreeNode<int> *root = takeInputLevelWise();
    printLevelWise(root);
    int k;
    cin >> k;
    cout<<numnode(root)<<endl;
    depth(root, k);
}