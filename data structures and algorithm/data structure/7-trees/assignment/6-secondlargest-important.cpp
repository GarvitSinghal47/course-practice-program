#include <iostream>
using namespace std;
#include <vector>
#include <queue>

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
        



class helper {
  public :
    TreeNode<int>*  m;
    TreeNode<int>* sm;
    
    helper (TreeNode<int>* m, TreeNode<int>* sm) {
        this->m = m;
        this->sm = sm;
    }
};

helper help (TreeNode<int>* root) {
    if(root==NULL){
        helper r(NULL,NULL);
        return r;
    }
    helper ans(root, NULL);
    for (int i = 0; i < root->children.size(); i++) {
            helper child = help (root -> children[i]);  
            if(child.m->data > ans.m->data){
                if(child.sm==NULL){
                    ans.sm=ans.m;
                    ans.m=child.m;
                }
                else{
                    if(child.sm->data > ans.m->data){
                        ans.sm=child.sm;
                        ans.m=child.m;
                    }
                    else{
                       ans.sm=ans.m;
                        ans.m=child.m; 
                    }
                }
            }
        else {
            if(ans.m->data!=child.m->data && (ans.sm==NULL || child.m->data > ans.sm->data)){
                ans.sm=child.m;
            }
        }
        }
    return ans;
}

TreeNode <int>* secondLargest(TreeNode<int> *root) {
    
    if (root == NULL) return NULL;
    helper ans = help (root);
    return ans.sm;
}






int main() {

    TreeNode<int>* root = takeInputLevelWise();
 

    (printLevelWise(root));
    
    
    TreeNode<int> *ans=secondLargest(root);
   cout<<ans->data;

    

}
