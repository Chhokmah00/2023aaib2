class Solution {
public:
    string maximumOddBinaryNumber(string s) {
        int N = s.length(); //C++的字串長度
        int one = 0; //s裡面有幾個1，等下數
        for(int i=0; i<N; i++){ // C/C++迴圈(有圓括號)
            if(s[i]=='1') one += 1; //if(判斷)
        }
        //printf("N:%d one:%d", N, one); //印出來有幾個1
        string ans; //用來放答案
        for(int i=0; i<one-1; i++) ans += '1'; //有幾個1要放前面
        for(int i=0; i<N-one; i++) ans += '0'; //有幾個0要放中間
        ans += '1'; //最後塞個1
        return ans;
    }
};