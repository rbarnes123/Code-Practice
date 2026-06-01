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
    bool traverse(TreeNode*p, TreeNode* q, bool same){
        // check for empty trees
        if(p == nullptr && q == nullptr){
            return true;
        }else if(p == nullptr && q != nullptr){
            return false;
        }else if(p != nullptr && q == nullptr){
            return false;
        }
        // check for diffrent values
        if(p->val != q->val){ 
            cout << "P:" << p->val << "Q:" << q->val << endl;
            return false;
        }
        // check for diffrent structure
        if(p->left != nullptr){
            if(q->left == nullptr){
                return false;
            }else{
                same = traverse(p->left,q->left,same);
            }
        }else if(q->left != nullptr){
            if(p->left == nullptr){
                return false;
            }
            else{
                same = traverse(p->left,q->left,same);
            }
        }
        if(p->right != nullptr){
            if(q->right == nullptr){
                return false;
            }
            else{
                same = traverse(p->right,q->right,same);
            }
        }
        else if(q->right != nullptr){
            if(p->right == nullptr){
                return false;
            }
            else {
                same = traverse(p->right,q->right,same);
            }
        }
        return same;
    }
    bool isSameTree(TreeNode* p, TreeNode* q) {
        bool same = true;
        same = traverse(p,q,true);
        return same;
    }
};