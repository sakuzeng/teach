#include <stdio.h>

int main(){
	int x, result;
	
	//读入x的值
	scanf("%d", &x);
	//计算结果
	result = ((((3 * x + 2) * x - 5) * x - 1) * x + 7) * x - 6;
	//输出结果
	printf("%d\n", result);
	
	return 0;
}