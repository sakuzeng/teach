#include <stdio.h>

int main(){
	//��һ�ָ�ֵ��ʽ
	int a;
	float b;
	
	a = 10;
	b = 12.225f;

	printf("����a��ֵ��%d\n", a);
	printf("����b��ֵ��%f\n", b);
	printf("����b��ֵ��%.2f\n", b);
	printf("------------------------------\n");
	printf("����a��ֵ��%d\n����b��ֵ��%f\n����b��ֵ��%.2f\n", a, b, b);
	return 0;
}