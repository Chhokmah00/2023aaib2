#二進位數字的字串，裡面有一堆0和1
#享用這些0和1湊出最大奇數(最右邊有一個1)
#解法: 先數「有幾個1」，把1個放右邊，其他放左邊，中間塞0
class Solution:
    def maximumOddBinaryNumber(self, s: str) -> str:
        N = len(s)
        one = 0 # s裡面有幾個1，等下數
        for c in s: # 針對字串s裡的每個字母c，逐一檢查
            if c=='1': one +=1 # 如果是'1'的話one +1
        return '1'*(one-1) + '0'*(N-one) + '1'