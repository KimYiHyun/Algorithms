#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <windows.h>

int fact(int n) {
	int result = 1;
	for (int i = 1; i <= n; ++i) {
		result = result * i;
	}
	return result;
}

int main(void) {

	clock_t start, finish;
	double duration;
	int n;

	printf("���ڸ� �Է��ϼ��� :  ");
	scanf_s("%d", &n);
	start = clock();
	Sleep(100);
	int result = fact(n);
	printf("\nfactorial %d! : ", n);
	printf("%d\n\n", fact(n));
	finish = clock();
	duration = (double)(finish - start) / CLOCKS_PER_SEC;
	printf("%f���Դϴ�.\n", duration);

	system("pause");
}