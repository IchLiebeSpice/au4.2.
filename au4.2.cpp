// au4.2.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"


int main()
{
	char arr[1000];
	printf("Enter a word: ");
	gets_s(arr);
	int a = 1;
	for (int i = 0; i < strlen(arr); ++i) {
		if ((arr[i] > 'z' || arr[i] < 'a') && (arr[i] > 'Z' || arr[i] < 'A')) {
			a = 0;
		}
	}
	if (a) {
		printf("It's a word\n");
	}
	else
		printf("It's not a word\n");

	return 0;
	getchar();
}
