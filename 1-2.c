#include<stdio.h> //���� ó�� �Լ����� ������ ���� �Ǿ� �ִ�.
#include<ctype.h>

int main(void)
{
	int c;

	while ((c = getchar()) != EOF) //��ȣ�� ���Ͽ� getchar()�� ��ȯ�Ǵ� ���� ���� c�� ���Եǰ� c�� ���� EOF�� �ٸ����� �˻�ȴ�.
	{						//������ ���� �ƴϸ� �ݺ�, ���⼭�� �Է��� ���� ��Ÿ����.
		if (islower(c))		//islower: c�� �ҹ����ΰ�?
			c = toupper(c);	//�ҹ��ڸ� toupper�� �̿��� �빮�ڷ� ��ȯ�Ѵ�.  toupper: �빮�ڷ� ��ȯ.
		putchar(c);			// putchar:c�� ����� ���ڸ� ����Ѵ�.
	}

	getch();
	return 0;
}