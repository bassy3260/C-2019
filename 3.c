#include<stdio.h>
#include<string.h>

int main() {
	char name[20];

	int *arr[4][2] = {
	{"���", "500"},
	{"����", "800"},
	{"����", "25000"},
	{"�ٳ���", "1000"}
	};

	printf("������ �̸��� �Է��ϼ��� --> ");
	gets(name);

	for (int i = 0; i < 4; i++) {
		if (strcmp(name, arr[i][0]) == 0)
			printf("%s�� ������ %s�� �Դϴ�.", arr[i][0], arr[i][1]);
	}
	
	getch();
	return 0;
}