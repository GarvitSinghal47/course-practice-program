#include <iostream>
using namespace std;
#include <vector>
# include<climits>

template <typename T>
class TreeNode {
public:
    T data;
    vector<TreeNode<T>*> children;
    
    TreeNode(T data) {
        this->data = data;
    }
    
    ~TreeNode() {
        for (int i = 0; i < children.size(); i++) {
            delete children[i];
        }
    }
    
};


#include <queue>


TreeNode<int>* takeInputLevelWise() {
    int rootData;
    cout<<"enter root data";
    cin >> rootData;
    TreeNode<int>* root = new TreeNode<int>(rootData);
    
    queue<TreeNode<int>*> pendingNodes;
    
    pendingNodes.push(root);
    while (pendingNodes.size() != 0) {
        TreeNode<int>* front = pendingNodes.front();
        pendingNodes.pop();
        int numChild;
        cout<<"enter the no of childs of "<<front->data<<endl;
        cin >> numChild;
        for (int i = 0; i < numChild; i++) {
            int childData;
            cout<<"enter"<<i<<"th child of "<<front->data<<endl;
            cin >> childData;
            TreeNode<int>* child = new TreeNode<int>(childData);
            front->children.push_back(child);
            pendingNodes.push(child);
        }
    }
    return root;
}
void printLevelWise(TreeNode<int>* root) {
    
    if(root==NULL)
      return;
    
   
    queue<TreeNode<int>*> pendingnodes;
    pendingnodes.push(root);
   
   while(pendingnodes.size()!=0)
   {  
       TreeNode<int>*front=pendingnodes.front();
        pendingnodes.pop();
       cout<<front->data<<":";
  	 for(int i=0;i<front->children.size();i++)
  	 {  
  	     pendingnodes.push(front->children[i]);
         if(i==front->children.size()-1)
              cout<<front->children[i]->data;
         
         else
  	         cout<<front->children[i]->data<<",";
 	  }
 	  
        cout<<endl;
  	 
   }
    
}

int nextlarger(TreeNode<int> *root,int x,int minreq){
    if(root==NULL)
    {
        return -1;
    }
    
    if(root->data>x)
    {
        if(root->data<minreq)
        minreq=root->data ;
        
    }
    for(int i=0;i<root->children.size();i++)
    {
    int smallans=nextlarger(root->children[i],x,minreq);
    minreq=smallans;
    
    }
    return minreq ;

}

int main() {
    int x;
    cin>>x;
    TreeNode<int>* root = takeInputLevelWise();
 

    (printLevelWise(root));
    
    int minreq=INT_MAX;
     int ans=nextlarger(root,x,minreq);
   cout<<ans;

    

}