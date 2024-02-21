#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

/*
int main()
{
	unsigned int num = 0;
	unsigned int i = 1;
	int count = 0;

	printf("请输入一个整数：");
	scanf("%d", &num);

	while (i <= num && i != 0)
	{
		if ((i & num) == i)
		{
			count++;
		}
		i *= 2;
	}

	printf("%u在内存中有%d个1。\n", num, count);

	return 0;
}
*/

//升级版
int count_1(int num)
{
	int count = 0;

	while (num)
	{
		num = num & (num - 1);
		count++;
	}
	return count;
}

int main()
{
	int num = 0;

	printf("输入一个整数：");
	scanf("%d", &num);
	int ret = count_1(num);
	printf("有%d个1", ret);

	return 0;
}
