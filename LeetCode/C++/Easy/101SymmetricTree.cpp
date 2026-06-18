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
    bool dualTraverse(TreeNode* leftTree, TreeNode* rightTree,bool isSym){
        if(leftTree->val != rightTree->val){
            return false;
        }
        if(leftTree->left != nullptr){
            if(rightTree->right != nullptr){
                isSym = dualTraverse(leftTree->left,rightTree->right,isSym);
            }
            else{
                return false;
            }
        }
        else{
            if(rightTree->right != nullptr){
                return false;
            }
        }
        if(leftTree->right != nullptr){
            if(rightTree->left != nullptr){
                isSym = dualTraverse(leftTree->right,rightTree->left,isSym);
            }
        }else{
            if(rightTree->left != nullptr){
                return false;
            }
        }
        return isSym;
    }

    bool isSymmetric(TreeNode* root) {
        bool isSym = true;
        if(root->left == nullptr && root-> right == nullptr){
            return true;
        }else if(root->left == nullptr && root->right !=nullptr){
            return false;
        }
        else if(root->right == nullptr && root->left != nullptr){
            return false;
        }
        return dualTraverse(root,root,isSym);
    }
};