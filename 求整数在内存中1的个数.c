#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	unsigned int num = 0;
	unsigned int i = 1;
	int count = 0;

	printf("������һ��������");
	scanf("%d", &num);

	while (i <= num && i != 0)
	{
		if ((i & num) == i)
		{
			count++;
		}
		i *= 2;
	}

	printf("%u���ڴ�����%d��1��\n", num, count);

	return 0;
}