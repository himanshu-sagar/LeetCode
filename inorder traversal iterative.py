# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
from collections import deque
class Solution:
    def inorderTraversal(self, root: TreeNode) -> List[int]:
        inorder=[]
        n=0
        q=deque()
        while root!=None or n!=0:
            if root!=None:
                q.append(root)
                n+=1
                root=root.left
            else:
                root=q.pop()
                n-=1
                inorder.append(root.val)
                root=root.right
        return inorder
                
                