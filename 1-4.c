// 545p stringarray1.c //
#include<stdio.h>

int main(void)
{
	int i;
	char menu[5][10] = //2���� ���ڹ迭 menu[][]�� �����ϰ� 5���� ���ڿ��� �ʱ�ȭ�Ѵ�.
	{
		"init",
		"open",
		"close",
		"read",
		"write"
	};

	for (i = 0; i < 5; i++) //�ݺ� ������ �̿��Ͽ� ������ ���ڿ��� ȭ�鿡 ����Ѵ�.
		printf("%d ��° �޴�: %s \n", i, menu[i]); //i��° ���ڿ�

	getch();
	return 0;
}