#include <stdio.h>
void myPrint(int a[10]){
    for(int i=0;i<10;i++) printf("%d ",a[i]);
    printf("\n");
}
int main()
{
    int a[10]={9,8,7,6,5,4,3,2,1,0}; ///10數，9個間隔
    myPrint(a);
    for(int k=0;k<9;k++){
        for(int i=0;i<9;i++){ ///從左到右巡一輪
            if(a[i]>a[i+1]){ ///相鄰比大小
                int tamp=a[i]; ///交換
                a[i]=a[i+1];
                a[i+1]=tamp;
            }
        }
        myPrint(a);
    }
}

