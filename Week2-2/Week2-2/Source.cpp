#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int a[1000], n, m;
char c, d;
void toPos(int* ptr) {
	if (*ptr < 0) *ptr *= -1;
}
void toNeg(int* ptr) {
	if (*ptr > 0) *ptr *= -1;
}
void add(int* ptr, int i) {
	*ptr += i;
}
int main() {
	int i, j, temp;
	printf("input the amount of your number : ");
	scanf("%d", &n);
	for (i = 1;i <= n;i++) {
		printf("input your %d number : ", i);
		scanf("%d", &a[i]);
	}
	printf("input amount of your command : ");
	scanf("%d", &m);
	while (m--) {
		printf("Input your command : ");
		scanf(" %c", &c);
		if (c == 'A') {
			printf("Which position in the array you want to change : ");
			scanf("%d", &j);
			printf("input how much you want to add : ");
			scanf("%d", &temp);
			add(&a[j], temp);
		}
		else if (c == 'C') {
			printf("If you want to change it to negative type N or If you want to change it to positive type P\n");
			scanf(" %c", &d);
			if (d == 'N') {
				printf("Which position in the array you want to change : ");
				scanf("%d", &j);
				toNeg(&a[j]);
			}
			if (d == 'P') {
				printf("Which position in the array you want to change : ");
				scanf("%d", &j);
				toPos(&a[j]);
			}

		}
	}
	printf("Your array is :\n");
	for (i = 1;i <= n;i++) printf("%d ", a[i]);
	printf("\n");
	return 0;
}