/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left),
 * right(right) {}
 * };
 */
class Solution {
public:
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        bool flag = true;
        vector<vector<int>> ans;
         if(root==NULL){
            return ans;
        }
        queue<TreeNode*> q;
        q.push(root);
        while (!q.empty()) {
            int n = q.size();
            vector<int> level(n);

            for (int i = 0; i < n; i++) {

                int index;
                if (flag) {
                    index = i;
                } else {
                    index = n - 1 - i;
                }
                TreeNode* node = q.front();
                q.pop();
                level[index]=node->val;

                if (node->left)
                    q.push(node->left);

                if (node->right)
                    q.push(node->right);
            }
            ans.push_back(level);
            flag=!flag;
        }
        return ans;
    }
};