#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	printf("ÿ����һ�����ֺ��һ�γ��������������-1��س��õ����\n");
	int count = 0;
	int sum = 0;
	int a = 0;
	scanf("%d", &a);
	do 
	{
		sum += a;
		count++;
		printf("���������\n");
		scanf("%d",&a);
		
	} while (a != -1);
	printf("%f", 1.0 * sum / count);
	return 0;


}