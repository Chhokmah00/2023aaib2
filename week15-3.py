#寫到一半的
class Solution:
    def equalSubstring(self, s: str, t: str, maxCost: int) -> int:
        N=len(s)
        for i in range(N): #先用Python把字串的迴圈寫出來
            print(s[i],t[i])
        ans=0
        return ans