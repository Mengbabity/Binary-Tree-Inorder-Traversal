/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    vector<int> inorderTraversal(TreeNode* root) {
        vector<int> res;
        stack<TreeNode*> tmp;
        TreeNode* p=root;
        
        while(!tmp.empty() || p)
        {
            if(p)
            {
                tmp.push(p);
                p=p->left;
            }
            else
            {
                res.push_back(tmp.top()->val);
                p=tmp.top()->right;
                tmp.pop();
            }
        }
        
        return res;
    }
};
