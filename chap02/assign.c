#include <stdio.h>

int main(){
	//��һ�ָ�ֵ��ʽ
	int a;
	float b;
	
	a = 10;
	b = 12.5f;

    printf("%d %f\n", a, b);
	//�ڶ��ָ�ֵ��ʽ
	int c, d = 10, e;
	float weight, height = 3.0f;
	
    printf("%d %d %d\n", c, d, e);
    printf("%f %f\n", weight, height);

	return 0;
}