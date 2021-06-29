#include<stdio.h>
float mul(float x, float y);
float mul(float x, float y)
{
	float mul;
	mul = x * y;
	return(mul);
}

int main()
{
	float m, n, o;
	printf("Enter 2 numbers\n");
	scanf_s("%f %f", &m, &n);
	o = mul(m, n);
	printf("%.2f * %.2f = %.2f\n", m, n, o);
}