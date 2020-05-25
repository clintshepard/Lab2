#include <stdio.h>
#define SIZE 10

int main() {

	int n=0;
	float a[SIZE];

	printf("N = ");
	scanf_s("%i", &n);

	if (n <= 0 || n > SIZE) {
		printf("N out of list size");
		return 0;
	}
	for (int i = 0; i < n; i++) {
		printf("gimme %i element ",i+1);
		scanf_s("%f",&a[i]);
	}
	for (int i = 0; i < n; i++) {
		if (a[i] >= 0)
			printf("%f ", a[i]);
	}
	for (int i = 0; i < n; i++) {
		if (a[i] < 0)
			printf("%f ", a[i]);
	}
	return 0;
}