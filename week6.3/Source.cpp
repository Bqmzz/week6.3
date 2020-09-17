#include<stdio.h>
void swap(int* a, int* b)
{
	int x;
	x = *a;
	*a = *b;
	*b = x;
}
int main()
{
	int a, b;
	scanf_s("%d %d", &a, &b);
	swap(&a, &b);
	printf("%d %d\n", a, b);

	int *num;
	int n;
	num = &n;
	char print[20] = { "Input number" };
	printf("%s : ",print);
	scanf_s("\n%d", &n);
	for (int i = 1; i <= n; i++) // rectangle top
	{
		for (int j = n; j > i; j--) 
		{
			printf(" ");
		}
		for (int x = 1; x < i; x++) 
		{
			printf("*");
		}
		for (int z = 1; z <= i; z++) 
		{
			printf("*");
		}
		printf("\n");
	}
	for (int a = 1; a <= n; a++) 
	{
		for (int b = 1; b < a; b++) 
		{
			printf(" ");
		}
		for (int d = n; d > a; d--) {
			printf("*");
		}
		for (int c = n; c >= a; c--) 
		{
			printf("*");
		}
		printf("\n");
	}
	return 0;
}