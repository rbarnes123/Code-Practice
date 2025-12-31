class Solution:
    def inorderTraversal(self, root: Optional[TreeNode]) -> List[int]:
        output = []
        self.moveNode(root,output)
        return output
    def moveNode(self,TreeNode,output):
        if TreeNode:
            if TreeNode.left: 
                self.moveNode(TreeNode.left,output)
            output.append(TreeNode.val)
            if TreeNode.right:
                self.moveNode(TreeNode.right,output)