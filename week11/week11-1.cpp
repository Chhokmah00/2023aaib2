///��ƿz�l�k�A10000�H�U���h�ֽ��
#include <stdio.h>
int isPrime(int n){
    for(int i=2;i<n;i++){
        if(n%i==0) return 0;///�Q�㰣�N���O���
    }
    return 1;
}
int main()
{
    int BOUND=1000000,ans=0; ///�Q��BOUND�ܼơA�ݨ쩳�n�]�h�j���d��
    for(int i=2;i<BOUND;i++){
        if(isPrime(i)){
            printf("%d ",i); ///�L�X���
            ans++; ///�P��++ �h�@�ӽ��
        }
    }
    printf("��Ʀ�:%d ��\n",ans);
}
