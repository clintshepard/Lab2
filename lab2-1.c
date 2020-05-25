#include <stdio.h>
#include <math.h>
#define SIZE 10

int main() {
	double a[SIZE],b,y,t,f = 0;
	int n,c=0;
	/*Вводим размер массива*/
	printf("N = ");
	scanf_s("%i", &n);
	/*Проверяем, не выходит ли массив за границы*/
	if (n <= 0 || n > SIZE) {
		printf("N out of range!\n");
		return 0;
	}
	/*Вводим значения массива*/
	for (int i = 0; i < n; i++) {
		printf("gimme %i element ",i+1);
		scanf_s("%lf", &b);
		a[i] = b;
	}
	/*Переменную f используем как проверку, стоят ли числа с цифрами после запятой на первых позициях*/
	for (int i = 0; i < n; i++)
		if ((fmod(a[i], 2.0) == 0) && (f == 0))
			f = a[i];
	for (int i = 0; i < n; i++) {
		y = fmod(a[i], 2.0);
		t = fmod(f, 2.0);
		/*Проверка, является ли настоящий элемент массива целым*/
		if (fmod(a[i], trunc(a[i])) != 0)
			continue;
		/*Проверка условия задачи*/
		else if (((t == 0) && (y == 0)) || ((y != 0) && (t != 0))) {
			c = 1;
			f=a[i];
		}
		/*Если четное стоит после нечетного, то сразу же прерывается цикл, а флаг c становится равен 0*/
		else if ((t != 0) && (y == 0)) {
			c = 0;
			break;
		}
		/*Если предыдущее значение было четным, а следующее нечетным, то проверяется, стоит ли после нечетного четное*/
		else if ((t == 0) && (y != 0)) {
			if ((fmod(a[i + 1], 2.0) == 0) && (i+1<n-1)) {
				c = 0;
				break;
			}
			c = 1;
		}

	}
	/*Если флаг с равен 1, то выполняется первое условие задачи*/
	if (c == 1) {
		int i = n-1;
		printf(" If there's empty - it's fine");
		while (i >= 0) {
			if (a[i] < 0)
				printf("%lf ", a[i]);
			i--;
		}
	}
	/*Если флаг с равен 0, то выполняется второе условие задачи*/
	else if (c == 0) {
		int i = n-1;
		printf("If there's empty - it's fine");
		while (i >= 0) {
			if (a[i] >= 0)
				printf("%lf ", a[i]);
			i--;
		}
	}
	return 0;
}