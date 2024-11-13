#include <stdio.h>

int main(){
	//第一种赋值方式
	int a;
	float b;
	
	a = 10;
	b = 12.225f;

	printf("变量a的值：%d\n", a);
	printf("变量b的值：%f\n", b);
	printf("变量b的值：%.2f\n", b);
	printf("------------------------------\n");
	printf("变量a的值：%d\n变量b的值：%f\n变量b的值：%.2f\n", a, b, b);
	return 0;
}