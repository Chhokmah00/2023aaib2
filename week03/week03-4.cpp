class Solution:
    def maxFrequencyElements(self, nums: List[int]) -> int:
        t=[0]*101 #統計數字出現次數，因數字1-101，陣列要開101個
        best=0 #最多的數字出現幾次
        for num in nums: #迴圈，針對每個數字做處理
            t[num]+=1 #這個數字num出現次數+1
            if t[num]>best: best=t[num] #最多出現的t統計數字是多少
        #到這裡，t就有全部數字出現的次數了，且best就是最多的
        #把全部最多的都加起來
        total=0
        for T in t: #針對統計結果t裡面的個數字T
            if T==best: total+=T
        return total