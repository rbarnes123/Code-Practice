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
class Solution {
public:
    ListNode* swapPairs(ListNode* head) {
        // check case where list is empty
        if(head == nullptr){
            return nullptr;
        // case where only one node
        }else if(head->next == nullptr){
            return head;
        }
        // all other cases
        else{
            ListNode * fast = head->next;
            ListNode * slow = head;
            ListNode * fTemp;
            ListNode * sTemp;

            while (fast != nullptr){
                // point fast to slow(swap)
                fTemp = fast->next;
                fast->next = slow;
                // point head to new node the first time we swap
                if(slow == head){
                    head = fast;
                }
                // hold slow's old value to reconnect after next swap
                if (slow != nullptr){
                    sTemp = slow;
                }
                // check if fast is last node or not
                if(fTemp != nullptr){
                    slow = fTemp;
                    // check if slow is last or not
                    if (fTemp->next == nullptr){
                        sTemp->next = slow;
                        break;
                    }else{
                        fast = fTemp->next;
                        sTemp->next = fast;
                    }
                }
                // fast is last node
                else{
                    fast->next = slow;
                    sTemp->next = fast;
                    slow->next = nullptr;
                    break;
                }
            }
        }
        return head;
    }
};