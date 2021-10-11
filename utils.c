#include <stdio.h>
#include <string.h>
#include <windows.h>

#include "head.h"

int chk_ml(char str[]) {
	char * p, * q;
	int z, x, j;

	p = strchr(str, '@');
	z = p - & str[0];
	z++;
	q = strchr(str, '.');
	x = q - & str[0];
	x++;

	j = q - p;

	if (j > 1) {
		if (z > 2) {
			system("color f2");
			return 1;
		} else {
			system("color f4");
			printf("\tInvalid Email");
			return 0;
		}
	} else {
		system("color f4");
		printf("\tInvalid Email");
		return 0;
	}
}

void pr_s(void) {
	for (int l = 0; l < 120; l++)
		printf("_");
}

/* patch - 1 */
void source(void) {
	system("del data.txt");
	rename("data2.txt", "data.txt");
}
