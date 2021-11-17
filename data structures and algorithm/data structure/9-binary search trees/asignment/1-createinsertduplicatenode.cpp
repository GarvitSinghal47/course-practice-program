
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
void insertDuplicateNode(binarytreenode<int> *root) {
    // Write your code here
	if(root==NULL)
        return;
    
    binarytreenode<int> *duplicate = new binarytreenode<int> (root->data);
    duplicate->left=root->left;
    root->left=duplicate;
    
    insertDuplicateNode(duplicate->left);
    insertDuplicateNode(root->right);
}   

void printLevelATNewLine(binarytreenode<int> *root) {
   
	if(root==NULL)
        return;
    
    queue<binarytreenode<int> *> pn;
    
    pn.push(root);
    //null is inserted as a check to insure that this level has been ended or has been finished and whenever we hit null we are going to add a  new line.
    pn.push(NULL);
    
    while(pn.size()!=0)
    { 
        binarytreenode<int> *front=pn.front();
        pn.pop();
        
        //this will be a check to see for the no if they have been added of there level and we have to go to the next level
       if(front==NULL)
       {  
           //this is done when the last no is also popped and there is a null left behind then we will break and come out of the loop without pushing a new null
           if(pn.size()==0)
           break;
         cout<<endl;
         //this null will be append at the last
          pn.push(NULL);
       }
        
     else
     { cout<<front->data<<" ";
     
        if(front->left)
        pn.push(front->left);
        if(front->right)
         pn.push(front->right);
     }
    }
    
}
int main()
{
    binarytreenode<int> *ans = takeinputlevelwise();
    // printLevelWise(ans);
    
    insertDuplicateNode(ans);
   printLevelATNewLine(ans);
}