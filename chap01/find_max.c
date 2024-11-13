#include <stdio.h>

int main(){
    int a, b, c;
    //读入数据
    scanf("%d%d%d", &a, &b, &c);
    //寻找最大值
    if(a > b){//a比b大
        if(a > c){//a比c大
            printf("%d\n", a);
        }
        else{//c比a大
            printf("%d\n", c);
        }
    }
    else{//b比a大
        if(b > c){//b比c大
            printf("%d\n", b);
        }
        else{//c比b大
            printf("%d\n", c);
        }
    }

    return 0;
}