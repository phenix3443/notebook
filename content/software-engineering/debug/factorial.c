/* factorial.c */
/* 第三章代码程序，测试gdb基本使用 */
#include <stdio.h>
#include <stdlib.h>

int factorial(int n) {
		int result=1;
		if(n==0) {
				return result;
		}
		result = n * factorial(n-1);
		return result;
}

int main(int argc, char *argv[argc])
{
		int n,result;
		if(argc !=2){
				fprintf(stderr, "usage: factorial n, n>=0\n");
				return 1;
		}
		n  = atoi(argv[1]);
		result = factorial(n);
		printf("factorial %d=%d\n",n,result);
		return 0;
}
