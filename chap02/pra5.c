#include <stdio.h>

int main(){
	int x, result;
	
	//读入x的值
	scanf("%d", &x);
	//计算结果
	result = 3 * x * x * x * x * x + 2 * x * x * x * x - 5 * x * x * x - x * x + 7 * x - 6;
	//输出结果
	printf("%d\n", result);
	
	return 0;
}