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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode *node;
        vector<ListNode*> nodes;
        // case where there is only one element
        if(head->next == nullptr){return nullptr;}
        node = head;
        // traverse and store nodes
        while(node != nullptr){
            nodes.push_back(node);
            node = node->next;
        }
        // check if removing head
        if(n == nodes.size()){
            head = nodes[1];
        // check if removing tail
        }else if(n == 1){
           nodes[nodes.size() - 2]-> next = nullptr;
        }
        else{
            nodes[nodes.size() - n -1]-> next = nodes[nodes.size()+ 1 - n];
        }
       return head;
    }
};