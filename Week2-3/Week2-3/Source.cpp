#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int a[10000],mx= -2147483648,mx2= -2147483648,n;
void find2mx(int *ptr) {
	int i,temp;
	for (i = 0;i < n;i++) {
		if (a[i] >= mx) {
			temp = mx;
			mx = a[i];
			if (temp >= mx2) mx2 = temp;
		}
		else if(a[i]>mx2) mx2 = a[i];
	}
}
int main() {
	int i;
	scanf("%d", &n);
	if (n <= 1) printf("Error");
	else {
		for (i = 0;i < n;i++) {
			scanf("%d", &a[i]);
		}
		find2mx(&a[0]);
		printf("%d %d", mx, mx2);
	}
	return 0;
}