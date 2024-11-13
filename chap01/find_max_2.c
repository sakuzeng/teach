#include <stdio.h>

int get2max(int a, int b);//函数定义，得到两个数中的最大值
int main(){
    int a, b, c;
    //读入数据
    scanf("%d%d%d", &a, &b, &c);
    //调用函数先得到a,b两者中的最大值，之后调用函数得到前面返回值和c两者中的最大值。
    //填空
    printf("%d", get2max(get2max(a, b), c));
    return 0;
}
//函数实现
int get2max(int a, int b){
    if(a > b){
        return a;
    }
    else{
        return b;
    }
    //return a > b ? a : b;
}