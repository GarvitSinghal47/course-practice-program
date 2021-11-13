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

binarytreenode<int> *tree(int *postorder, int *inorder, int ps, int pe, int is, int ie)
{
    if (ps > pe)
        return NULL;

    binarytreenode<int> *root = new binarytreenode<int>(postorder[pe]);

    int k = 0;
    for (int i = is; i <= ie; i++)
    {
        if (postorder[pe] == inorder[i])
        {
            k = i;
            break;
        }
    }

    int lps = ps;              //left poststart
    int lis = is;              //left instart
    int lie = k - 1;           //left inend
    int lpe = lie - lis + lps; //left  post end

    int rps = lpe + 1; //right poststart
    int rpe = pe - 1;  //  right postend
    int ris = k + 1;   //right instart
    int rie = ie;      //right inend

    root->left = tree(postorder, inorder, lps, lpe, lis, lie);
    root->right = tree(postorder, inorder, rps, rpe, ris, rie);

    return root;
}
binarytreenode<int> *getTreeFromPostorderAndInorder(int *postorder, int postLength, int *inorder, int inLength)
{
    return tree(postorder, inorder, 0, postLength - 1, 0, inLength - 1);
}

int main()
{
    int in[] = {2, 6, 3, 9, 5, 10};
    int post[] = {2, 9, 3, 6, 10, 5};
    binarytreenode<int> *ans = getTreeFromPostorderAndInorder(post, 6, in, 6);
    printLevelWise(ans);
}