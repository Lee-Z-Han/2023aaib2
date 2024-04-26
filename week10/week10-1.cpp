/// week10-1.cpp
/// 以前是用 for迴圈寫, 今天用「函式呼叫函式」來寫
#include <stdio.h>
int func(int n){
    if(n==1) return 1; /// 終止條件, 像「數學歸納法」N=1成立
    return n*func(n-1); /// 函式呼叫函式
}

int main()
{
    printf("請輸入N:");
    int N;
    scanf("%d",&N);
    int ans=func(N);
    printf("%d",ans);
}
