/* A binary tree node has data, pointer to left child
   and a pointer to right child  
struct Node
{
    int data;
    Node* left;
    Node* right;
}; */


class Solution
{
    public:
    
    void loop(Node* root,vector<int> &ans){
        if(!root)
            {
                ans.push_back(-1);
                return;
            }
        ans.push_back(root->data);    
        loop(root->left,ans);
        loop(root->right,ans);
    }
    //Function to serialize a tree and return a list containing nodes of tree.
    vector<int> serialize(Node *root) 
    {
        //Your code here
        vector<int> preorder;
        loop(root,preorder);
        return preorder;
    }
    int index=0;
    
    //Function to deserialize a list and construct the tree.
    Node * deSerialize(vector<int> &a)
    {
       //Your code here
       if(a.size()==index || a[index]==-1)
         {
           index++;     
           return NULL;  
         }
         
       Node* node=new Node(a[index]);
       index++;
       node->left=deSerialize(a);
       node->right=deSerialize(a);
       return node;
    }

};