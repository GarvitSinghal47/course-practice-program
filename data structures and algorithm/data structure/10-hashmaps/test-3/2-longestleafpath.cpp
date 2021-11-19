

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
    bool longestleaf;
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

int longestleafhelp(binarytreenode<int> *root,vector<int>*v)
{
    
    if (root == NULL)
    {
        return 0;
    }
   

    int height1 = 1+longestleafhelp(root->left,v);
    int height2= 1+longestleafhelp(root->right,v);
    if(height1>height2)
    {
        v->push_back(root->left->data);
        return height1;
    }
    else if(height1<height2)
    {
        v->push_back(root->right->data);
        return height2 ;
    }

   
}
vector<int>* longestleaf(binarytreenode<int>*root)
{
    vector<int>*v = new vector<int>();
    longestleafhelp(root, v);
    v->push_back(root->data);
    return v;
}

    int main()
{
    binarytreenode<int> *ans = takeinputlevelwise();
    printLevelWise(ans);
  vector<int>*v= longestleaf(ans);
  for(auto i:*v)
  {
      cout << i << endl;
  }
 
}