#include <iostream>
using namespace std;
#include <vector>
#include <bits/stdc++.h>

template <typename T>
class treenode
{
public:
    T data;
    vector<treenode<T> *> children;

    treenode(T data)
    {
        this->data = data;
    }

    ~treenode()
    {
        for (int i = 0; i < children.size(); i++)
        {
            delete children[i];
        }
    }
};

#include <queue>

treenode<int> *takeInputLevelWise()
{
    int rootData;
    cout << "enter root data";
    cin >> rootData;
    treenode<int> *root = new treenode<int>(rootData);

    queue<treenode<int> *> pendingNodes;

    pendingNodes.push(root);
    while (pendingNodes.size() != 0)
    {
        treenode<int> *front = pendingNodes.front();
        pendingNodes.pop();
        int numChild;
        cout << "enter the no of childs of " << front->data << endl;
        cin >> numChild;
        for (int i = 0; i < numChild; i++)
        {
            int childData;
            cout << "enter" << i << "th child of " << front->data << endl;
            cin >> childData;
            treenode<int> *child = new treenode<int>(childData);
            front->children.push_back(child);
            pendingNodes.push(child);
        }
    }
    return root;
}
void printLevelWise(treenode<int> *root)
{

    if (root->data == NULL)
        return;

    queue<treenode<int> *> pendingnodes;
    pendingnodes.push(root);

    while (pendingnodes.size() != 0)
    {
        treenode<int> *front = pendingnodes.front();
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

treenode<int> *deleteleafnodes(treenode<int> *root)
{
    if (root == NULL)
        return NULL; //if root is NULL return NULL
    if (root->children.size() == 0)
    { //if root itself is leaf then return NULL
        delete root;
        return NULL;
    }
    for (int i = 0; i < root->children.size(); i++)
    { //moving onto its children
        treenode<int> *child = root->children[i];
        if (child->children.size() == 0)
        { // if leaf then delete that node
            delete child;
            for (int j = i; j < root->children.size() - 1; j++)
            { // update the children vector as well
                root->children[j] = root->children[j + 1];
            }
            //this will delete the children remaining at the end after copying last child will have to copy obe of which must be pop backed.
            root->children.pop_back();
            i--;
        }
    }
    for (int i = 0; i < root->children.size(); i++)
    { //recursive call
        root->children[i] = deleteleafnodes(root->children[i]);
    }
    return root;
}

int main()
{
    treenode<int> *root = takeInputLevelWise();
    printLevelWise(root);
    deleteleafnodes(root);
    printLevelWise(root);
}
