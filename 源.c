#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	printf("每输入一个数字后回一次车，输入完后输入-1后回车得到结果\n");
	int count = 0;
	int sum = 0;
	int a = 0;
	scanf("%d", &a);
	do 
	{
		sum += a;
		count++;
		printf("请继续输入\n");
		scanf("%d",&a);
		
	} while (a != -1);
	printf("%f", 1.0 * sum / count);
	return 0;


}