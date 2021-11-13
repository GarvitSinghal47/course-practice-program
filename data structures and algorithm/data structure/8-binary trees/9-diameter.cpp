#include<iostream>
template<typename T>
class binarytreenode{
    public:
    T data;
    binarytreenode* left;
    binarytreenode* right;
 
    binarytreenode(T data)
    {
        this->data=data;
       
         right=NULL;
         left=NULL;
        
    }
    ~binarytreenode()
    {
        delete left;
        delete right;
    }
};
# include<iostream>
# include<queue>
using namespace std;

binarytreenode<int>*takeinputlevelwise()
{
    int rootdata;
    cout<<"enter root data"<<endl;
    cin>>rootdata;
    if (rootdata==-1)
    {
        return NULL;
    }
    binarytreenode<int>*root=new binarytreenode<int>(rootdata);
    queue<binarytreenode<int>*>pendingnodes;
    pendingnodes.push(root);
    while(pendingnodes.size()!=0)
    {
        binarytreenode<int>*front=pendingnodes.front();
        pendingnodes.pop();
        cout<<"left child of "<<front->data<<endl;
        int leftchilddata;
        cin>>leftchilddata;
        if (leftchilddata!=-1)
        {
            binarytreenode<int>*child=new binarytreenode<int>(leftchilddata);
            front->left=child;
            pendingnodes.push(child);
        }
        cout<<"right child of "<<front->data<<endl;
        int rightchilddata;
        cin>>rightchilddata;
        if (rightchilddata!=-1)
        {
            binarytreenode<int>*child=new binarytreenode<int>(rightchilddata);
            front->right=child;
            pendingnodes.push(child);
        }
    }
    return root;

}
void printLevelWise(binarytreenode<int> *root) {
  
    if(!root)
        return;
   
    queue<binarytreenode<int> *> pn ;
    pn.push(root);
    
    while(!pn.empty())
    {
        binarytreenode<int> * front= pn.front();
        pn.pop();
        cout<<front->data<<":";
        
        if(front->left)
        {   pn.push(front->left);
            cout<<"L:"<<front->left->data;
        }
         else
             cout<<"L:-1";
        
        cout<<",";
        
        if(front->right)
       {pn.push(front->right);
        cout<<"R:"<<front->right->data<<endl;}
        else
             cout<<"R:-1"<<endl;
    }
}

// int height(binarytreenode<int>* root) {
// 	if (root == NULL) {
// 		return 0;
// 	}
// 	return 1 + max(height(root->left), height(root->right));
// }

// int diameter(binarytreenode<int>* root) {
// 	if (root == NULL) {
// 		return 0;
// 	}

// 	int option1 = height(root->left) + height(root->right);
// 	int option2 = diameter(root->left);
// 	int option3 = diameter(root->right);
// 	return max(option1, max(option2, option3));
// }

pair<int, int> heightDiameter(binarytreenode<int>* root) {
	if (root == NULL) {
		pair<int, int> p;
		p.first = 0;
		p.second = 0;
		return p;
	}
	pair<int, int> leftAns = heightDiameter(root->left);
	pair<int,int> rightAns = heightDiameter(root->right);
	int ld = leftAns.second;
	int lh = leftAns.first;
	int rd = rightAns.second;
	int rh = rightAns.first;

	int height = 1 + max(lh, rh);
	int diameter = max(lh + rh, max(ld, rd));
	pair<int, int> p;
	p.first = height;
	p.second = diameter;
	return p;
}

int main ()
{
   binarytreenode<int>* ans= takeinputlevelwise();
    pair<int,int>p=heightDiameter(ans);
    printLevelWise(ans);
    cout<<"height :"<<p.first<<endl;
    cout<<"diameter :"<<p.second<<endl;
    

}