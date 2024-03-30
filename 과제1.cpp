#include <stdio.h>

int main(void) {
	char str1[] = "Korea";
	char str2[] = "Seoul";
	char str3[] = "Mapo";
	char str4[] = "152¹øÁö 2/3";

	printf("%s \n %s \n %s \n %s\n", str1, str2, str3, str4);

	char* array[] = { str1, str2, str3, str4 };
	for (int i = 0; i < 4; i++) {
		printf("%s \n", array[i]);
	}
}