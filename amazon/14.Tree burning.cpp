 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
int Solution::solve(TreeNode* A, int B) {
    unordered_map<TreeNode*,TreeNode*> parent_map;

    vector<int> visited(1e5,0);
    
    queue<TreeNode*> q;
    queue<TreeNode*> bq;

    q.push(A);

    while(!q.empty()){
        TreeNode* temp=q.front();
        q.pop();
        if(temp->right){
           parent_map[temp->right]=temp;
           q.push(temp->right); 
        }
        if(temp->left){
           parent_map[temp->left]=temp; 
           q.push(temp->left); 
        }     
        if(temp->val==B)
            bq.push(temp);        
    }

    int time=0;
    while(!bq.empty()){

        int k=bq.size();
        while(k--){
            TreeNode* temp=bq.front();
            bq.pop();
            if(temp->left && !visited[temp->left->val])
                {
                    visited[temp->left->val]=1;
                    bq.push(temp->left);
                }
            if(temp->right && !visited[temp->right->val])
                {
                    visited[temp->right->val]=1;
                    bq.push(temp->right);
                }  
            if(parent_map.find(temp)!=parent_map.end() && !visited[parent_map[temp]->val])
                {
                    visited[parent_map[temp]->val]=1;
                    bq.push(parent_map[temp]);
                }
        }   
             
        time++;                       
    }

    return time-1;
}