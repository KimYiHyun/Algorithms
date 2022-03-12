#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define n 5

void queens(int i);
int promising(int i);
int col[n];


void queens(int i) {
	int j;
	if (promising(i)) {
		if (i == n) {
			for (i = 1; i <= n; i++)
				printf("%d ", col[i]);
			printf("\n");
		}
		else {
			for (j = 1; j <= n; j++) {
				col[i + 1] = j;
				queens(i + 1);
			}
		}
	}
}

int promising(int i) {

	int k = 1;
	int promising = 1;
		
	while (k < i && promising) {
		if (col[i] == col[k] || abs(col[i] - col[k]) == abs(i - k)) 
			promising = 0;
		k++;
	}
	return promising;
}

int main(void) {
	void queens(int i);
	queens(0);

	system("pause");
	return 0;
}

