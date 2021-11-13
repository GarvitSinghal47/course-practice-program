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
#include<cmath>
using namespace std;

binarytreenode<int>*takeinputlevelwise()
{
    int ansdata;
    cout<<"enter ans data"<<endl;
    cin>>ansdata;
    if (ansdata==-1)
    {
        return NULL;
    }
    binarytreenode<int>*ans=new binarytreenode<int>(ansdata);
    queue<binarytreenode<int>*>pendingnodes;
    pendingnodes.push(ans);
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
    return ans;

}
void printLevelWise(binarytreenode<int> *ans) {
  
    if(!ans)
        return;
   
    queue<binarytreenode<int> *> pn ;
    pn.push(ans);
    
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
void zigzag(binarytreenode<int> *ans) {
   int count=0;
	if(ans==NULL)
        {
            return;
        }
    queue<binarytreenode<int>*>pn;
    pn.push(ans);
    pn.push(NULL);
     while(pn.size()!=0)
    { 
        binarytreenode<int> *front=pn.front();
        pn.pop();
        count++;
        
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
     { 
         cout<<front->data<<" ";
         
     
     if(count%2==0)
     {
        if(front->left)
        pn.push(front->left);
        if(front->right)
         pn.push(front->right);
     }
     //it will push right data first in the queue ansd left afterward so that it will come out according to which they are inserted .
     else if(count%2!=0){

        if(front->right)
         pn.push(front->right);
          if(front->left)
        pn.push(front->left);
     }
     }
    }

    
}


int main ()
{
   binarytreenode<int>* ans= takeinputlevelwise(); 
    zigzag(ans);
   
    
    

}