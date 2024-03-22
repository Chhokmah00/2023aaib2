# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution:
    def isPalindrome(self, head: Optional[ListNode]) -> bool:
        a=[] #先把a設成很小的、短的陣列list
        while head != None:
            a.append(head.val) #先把head的那一串東西，轉換成陣列a
            head=head.next
        #print(a) 
        N=len(a) #有多少數字
        for i in range(len(a)): #i就照回圈跑
            if a[i] != a[N-1-i]: return False #頭尾不相同
        return True