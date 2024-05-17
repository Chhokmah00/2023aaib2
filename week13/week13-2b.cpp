///Q1:有多長?Q2:怎麼判斷?
#include <string.h>
#include <stdio.h>
int main()
{
    char line[20]; ///長一點較保險
    scanf("%s",line);
    int N=strlen(line); ///知道字串的長度
    int bad=0; ///一開始沒有壞掉
    for(int i=0;i<N;i++){ ///逐字檢查
        if(line[i]!=line[N-i-1]) bad=1;
    } ///若前後對應的字母不同，失敗
    if(bad==1) printf("NO\n");
    else printf("YES\n");
}
