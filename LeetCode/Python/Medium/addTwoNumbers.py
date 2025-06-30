# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution:
    def addTwoNumbers(self, l1: Optional[ListNode], l2: Optional[ListNode]) -> Optional[ListNode]:
        num1,num2 = "",""
        # creates a string with each number from the linked list in it
        while (l1 is not None):
            num1 = str(l1.val) + num1
            l1 = l1.next
        while (l2 is not None):
            num2 = str(l2.val) + num2
            l2 = l2.next
        #converts these strings to integers to be added
        num1 = int(num1)
        num2 = int(num2)
        Sum = num1 + num2
        print(Sum)
        # link digits in reverse order
        head = None 
        tail = None
        node = None
        # check if sum is 0
        if(Sum == 0):
            node = ListNode(val = 0)
            return node
        while Sum != 0:
            digit = Sum % 10
            Sum = Sum // 10
            # create a new node with just that digit 
            node = ListNode(val=digit)
            #links nodes together
            if not head:
                head = node
                tail = node
            else:
                tail.next = node
                tail = node
        return head
