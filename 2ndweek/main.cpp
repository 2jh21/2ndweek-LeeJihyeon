#include <stdio.h>
#include <stdlib.h>

int main()
{
	int i, num;
	int sum = 0;

	for (num = 2; num < 100; num++)
	{
		for (i = 2; i < num; i++)
		{
			if (num % i == 0) break;
		}
		if (num == i)
			sum += num;
	}
	printf("1���� 100���� �Ҽ��� ��: %d\n", sum);
	
	system("pause");

	return 0;
}