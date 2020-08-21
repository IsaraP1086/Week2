#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
void Triangle(int n) {

	int i, j;
	for (i = 0;i < n;i++) {
		for (j = i;j >= 0;j--) {
			if (j == i || j == 0 || i == n - 1)
				printf("*");
			else printf(" ");
		}
		printf("\n");
	}

}
int main() {
	int n, i, j;
	scanf("%d", &n);
	Triangle(n);
	return 0;
}