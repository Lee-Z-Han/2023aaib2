/// week12-1.cpp 想了解 矩陣(二維陣列,兩個方括號)
#include <stdio.h>
void myPrint(int x[3][4]){ ///我們的函式,可印矩陣
    for(int i=0;i<3;i++){
        for(int j=0;j<4;j++){
            printf("%d ",x[i][j]);
        }
        printf("\n");
    }
    printf("\n");
}
int main()
{
    int a[3][4];
    int b[3][4]={1,2,3};
    int c[3][4]={{1,2,3,4},
                 {5,6,7,8},
                 {9,10,11,12}};
    myPrint(a);
    myPrint(b);
    myPrint(c);
}
