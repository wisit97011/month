#include<stdio.h>
int main() {
	int x, y, a, b;
	printf("Enter Month : ");
	scanf_s("%d", &x);
	switch (x) {
	case 1: printf("This Month is January\n"); break;
	case 2: printf("This Month is February\n"); break;
	case 3: printf("This Month is March\n"); break;
	case 4: printf("This Month is April\n"); break;
	case 5: printf("This Month is May\n"); break;
	case 6: printf("This Month is June\n"); break;
	case 7: printf("This Month is July\n"); break;
	case 8: printf("This Month is August\n"); break;
	case 9: printf("This Month is September\n"); break;
	case 10: printf("This Month is October\n"); break;
	case 11: printf("This Month is November\n"); break;
	case 12: printf("This Month is December\n"); break;
	}
	return 0;
}