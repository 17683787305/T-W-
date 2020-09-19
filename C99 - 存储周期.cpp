// forc99.c -- C99关于代码块的新规则
/*#include <stdio.h>
int main(void)
{
	int n = 10;
	printf("Initially,n = %d\n", n);
	for (int n = 1; n < 3; n++)
		printf("loop 1: n = %d\n", n);
	printf("After loop 1,n = %d\n", n);
	for (int n = 1; n < 3; n++)
	{
		printf("loop 2 index n = %d\n", n);
		int n = 30;
		printf("loop 2: n = %d\n", n);
		n++;
	}
	printf("After loop 2,n = %d\n", n);
	return 0;
}*/

// loc_stat.c -- 使用一个局部静态变量
/*#include <stdio.h>
void trystat(void);
int main(void)
{
	int count;
	for(count = 1;count <= 3; count++)
	{
		printf("here comes iteration %d: \n", count);
		trystat();
	}
	return 0;
}
void trystat(void)
{
	int fade = 1;
	static int stay = 1;
	printf("fade = %d and stay = %d\n", fade++, stay++);
}*/