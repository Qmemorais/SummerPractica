#include "stdafx.h"
#include <stdio.h>
#include<locale.h>
float x1, x2, x3, y1, y2, y3, x, y;
float a, b, c;
void suck();
void suck()
{
	a = (x1 - x)*(y2 - y1) - (x2 - x1)*(y1 - y);
	b = (x2 - x)*(y3 - y2) - (x3 - x2)*(y2 - y);
	c = (x3 - x)*(y1 - y3) - (x1 - x3)*(y3 - y);
	if (((a >= 0) && (b >= 0) && (c >= 0)) || ((a < 0) && (b < 0) && (c < 0)))
	{
		if ((a == 0) || (b == 0) || (c == 0))
			printf("\nТочка лежит на стороне треугольника\n");
		else
			printf("\nТочка находится внутри треугольника\n");
	}
	else
		printf("\nТочка лежит вне треугольника\n");
}
int main()
{
	setlocale(LC_ALL, "Rus");
	for (;;)
	{
		printf("Введите координаты вершин треугольника(x и y) - ");
		scanf_s("%f%f%f%f%f%f", &x1, &y1, &x2, &y2, &x3, &y3);
		printf("\nВведите координаты точки - ");
		scanf_s("%f%f", &x, &y);
		suck();
		int z;
		printf("Если хотите выйти введите 0, продолжить 1 - ");
		scanf_s("%i", &z);
		for (;;)
		{
			if (z == 0)
				return 1;
			if (z != 1) {
				printf("Неверный ввод. Попытайтесь снова - ");	scanf_s("%i", &z);
			}
			else break;
		}
	}
    return 0;
}