#include <stdio.h>
int main()
{
    int n; ///要把數字的每一位剝開
    scanf("%d",&n);
    int N=0;
    int a[20]={};
    while(n>0){  ///如果數字還沒剝光
        a[N++]=n%10; ///int now=n%10; ///現在剝下來的數字
        ///printf("now:%d\n",now);
        n=n/10; ///整數除法，讓n變小
    }
    int bad=0;
    for(int i=0;i<N/2;i++){
        if(a[i]!=a[N-i-1]) bad=1;
    }
    if(bad==1) printf("NO\n");
    else printf("YES\n");
}
