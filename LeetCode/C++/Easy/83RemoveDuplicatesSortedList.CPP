/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
 #include<vector>
class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
        ListNode* curr = head;
        ListNode* prev = head;
        set<int> seen;
        bool inserted;
        while(curr != nullptr){
            inserted = seen.insert(curr->val).second;
            // not a duplicate just move 
            if(inserted){
                prev = curr;
                curr = curr->next;
            // move and redirect pointers
            }else{
                curr = curr->next;
                prev->next = curr;
            }
        }
        return head;
    }
};