#include<stdio.h>

int my_strcat(char *s1, char *s2)
{
	while (*s1 != 0)
	{
		s1++;
	}
	while (*s2 != 0)
	{
		*s1 = *s2;
		s1++;
		s2++;
	}
	return (*s1); 
}
int main()
{
	char string1[128] = "Hello";
	char string2[128] = "World";
	strcat(string1, string2);

	printf("%s", string1);
	my_strcat(string1, string2);

	printf("%s\n",string1);
	

	getch();
	return 0;
}