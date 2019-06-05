#include<stdio.h>
#include<string.h>

int main() {
	char name[20];

	int *arr[4][2] = {
	{"사과", "500"},
	{"포도", "800"},
	{"수박", "25000"},
	{"바나나", "1000"}
	};

	printf("과일의 이름을 입력하세요 --> ");
	gets(name);

	for (int i = 0; i < 4; i++) {
		if (strcmp(name, arr[i][0]) == 0)
			printf("%s의 가격은 %s원 입니다.", arr[i][0], arr[i][1]);
	}
	
	getch();
	return 0;
}