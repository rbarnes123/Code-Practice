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
    void pOTL(TreeNode* node,vector<int>& values){
        if(node->left != nullptr){
            pOTL(node->left,values);
        }
        if(node->right != nullptr){
            pOTL(node->right,values);
        }
        values.push_back(node->val);
        if(node->left == nullptr && node->right != nullptr){
            values.push_back(101);
        }else if(node->right == nullptr && node->left != nullptr){
            values.push_back(-101);
        }
    }
    void pOTR(TreeNode* node,vector<int>& values){
        if(node->right != nullptr){
            pOTR(node->right,values);
        }
        if(node->left != nullptr){
            pOTR(node->left,values);
        }
        values.push_back(node->val);
        if(node->left == nullptr && node->right != nullptr){
            values.push_back(-101);
        }else if(node->right == nullptr && node->left != nullptr){
            values.push_back(101);
        }
    }

    bool isSymmetric(TreeNode* root) {
        if(root->left == nullptr && root-> right == nullptr){
            return true;
        }else if(root->left == nullptr && root->right !=nullptr){
            return false;
        }
        else if(root->right == nullptr && root->left != nullptr){
            return false;
        }
        vector<int> valuesL;
        vector<int> valuesR;
        pOTL(root->left,valuesL);
        pOTR(root->right,valuesR);
        for(size_t i = 0; i < valuesL.size(); i++){
            if(valuesL[i] != valuesR[i]){
                return false;
            }
        }
        return true;
    }
};