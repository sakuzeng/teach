#include <stdio.h>

int main(){
	int a, b, area;
	
	a = 4;
	b = 5;

	area = a * b;
	printf("长方形的面积：%d\n", area);//变量
	printf("长方形的面积：%d\n", a * b);//表达式
	return 0;
}