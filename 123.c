#include <stdio.h>

void f(unsigned long long x)
{
if (x == 0) return;
printf("%llu\n", x % 10);
f(x / 10);
}

int main()
{

unsigned long long n;/*Рекурсивна функція*/
printf("**********************************\n");
printf("Введіть натуральні числа n = \b");
scanf("%llu", &n);
printf("**********************************\n");
f(n);
printf("**********************************\n");
}