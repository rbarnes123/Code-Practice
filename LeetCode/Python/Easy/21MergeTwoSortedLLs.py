# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution:
    def mergeTwoLists(self, list1: Optional[ListNode], list2: Optional[ListNode]) -> Optional[ListNode]:
        list3 = ListNode(-1)
        head = list3
         
        # links list 3's next to the next lower value and then moves list poiners appropriately
        while list1 and list2:
            if list1.val > list2.val:
                list3.next = list2
                list2 = list2.next
            elif list1.val < list2.val:
                list3.next = list1
                list1 = list1.next
            # if val is same just picks list 1's 
            else:
                list3.next = list1
                list1 = list1.next
            list3 = list3.next
        # when first list ends, links the remaining values of the other
        list3.next = list1 if list1 else list2

        return head.next