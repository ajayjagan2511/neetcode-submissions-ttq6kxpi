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
    int trav(TreeNode* node, int k, int num, int &ans){
        if(node->left!=NULL){
            num = trav(node->left, k, num, ans);   
        }
        num++;
        if(num==k){
        ans = node->val;
        // cout<<node->val<<" "<<num<<endl;
        }
        if(node->right!=NULL){
            num = trav(node->right, k, num, ans); 
        }
        return num;

    }
    int kthSmallest(TreeNode* root, int k) {
        int ans=-1;
        trav(root, k, 0, ans);
        return ans;
    }
};
