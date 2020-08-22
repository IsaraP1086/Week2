#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int a[10000],mx= -2147483648,mx2= -2147483648,n,x,y,b[10000];
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
void qsum(int *ptr) {
	int i;
	for (i = 1;i < n;i++) {
		b[i] += b[i - 1];
	}
}
int main() {
	int i,temp;
	scanf("%d", &n);
	if (n <= 1) printf("Error");
	else {
		for (i = 0;i < n;i++) {
			scanf("%d", &a[i]);
			b[i] = a[i];
		}
		find2mx(&a[0]);
		scanf("%d %d", &x, &y);
		if (x > y) {
			temp = x;
			x = y;
			y = temp;
		}
		qsum(&b[0]);
		printf("%d %d\n", mx, mx2);
		printf("%d", b[y-1] - b[x - 2]);
	}
	return 0;
}