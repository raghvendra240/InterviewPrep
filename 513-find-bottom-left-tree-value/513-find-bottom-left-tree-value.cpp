/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    int findBottomLeftValue(TreeNode* root) {
        int res;
        queue<TreeNode*>q;
        q.push(root);
        while(q.empty()==false){
             int n=q.size();
             for(int i=0;i<n;i++){
                auto curr=q.front();q.pop();
                if(i==0){
                    res=curr->val;
                }

                if(curr->left)
                    q.push(curr->left);
                if(curr->right)
                    q.push(curr->right);
             }
        }
        return res;
    }
};