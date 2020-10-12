/* memory.c */
/* 第四章程序，用于测试内存错误 */
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[argc])
{
		const int size = 100;
		int sum = 0;
		int *A = (int *)malloc(sizeof(int)*size);

		for (int n=size;n>0;n--) {
				A[n] = n;
		}

		for (int n=0;n<size;n++) {
				sum += A[n];
		}

		printf("sum=%d\n", sum);
		return 0;
}
