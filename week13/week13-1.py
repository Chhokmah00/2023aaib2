# Definition for a binary tree node. 資料結構的介紹
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val 值
#         self.left = left 左邊的
#         self.right = right 右邊的
class Solution:
    def removeLeafNodes(self, root: Optional[TreeNode], target: int) -> Optional[TreeNode]:
        if root==None: return root #沒有東西就提早結束
        left=self.removeLeafNodes(root.left,target) #先用同一函式，處理左半邊
        right=self.removeLeafNodes(root.right,target) #先用同一函式，處理左半邊
        if left==None and right==None and root.val==target: #最後變葉子，且值同
            return None #甚麼都沒有，交給當初呼叫的
        
        root.left=left
        root.right=right
        return root