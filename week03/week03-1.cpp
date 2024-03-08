#include <stdio.h>
int main()
{
    int a=5;
    while(a%2==1) printf("odd\n"); ///一直做
    ///if(a%2==1) printf("odd\n"); 做一次
    while(a>0) printf("a is > 0\n");
    ///if(a>0) printf("a is > 0\n");
}
///執行while時，就卡了
