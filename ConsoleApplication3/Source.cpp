#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


void main()

{
	//printf("a) b5 10 \tb) 100 t \tc) x 25\n   7 cm \t   1949 v \t   x y\n");

	//Задание 2

	/*setlocale(LC_ALL, "Rus");

	float a, y;
	printf("Введите значение a ");

	scanf("%f", &a);

	y = (7 * a*a) - (3 * a) + 3;

	printf("Значение У = %f\n", y);*/

	// Задание 3

	/*int a, x;

	printf("Ukazhites storonu kvadrata x = ");
	scanf("%d", &x);

	a = x * 4;

	printf("Znachenie a = %d\n", a);*/

	// Задание 4

	/*float r, p;
	printf("Ukazhite radius okruzhnosti r = ");
	scanf("%f", &r);

	p = r * 2 * 3.14;

	printf("%f\n", p);*/

	

	setlocale(LC_ALL, "Rus");


	int n;
	printf("Выберите номер задания n = ");
	scanf("%d", &n);
	if (n == 1)
	{
		float M, S, X, Y, Z;
		printf(" 1.Известно, что X кг конфет стоит A рублей. Определить, сколько стоит 1 кг и Y кг этих же конфет.\n Введите массу в кг = ");
		scanf("%f", &M);
		printf(" Введите стоимость = ");
		scanf("%f", &S);
		printf(" Введите массу стоимость которой Вас интересует = ");
		scanf("%f", &Y);

		X = S / M;
		Z = X * Y;

		printf("Стоимость одного киллограма составляет  = %f\n Стоимость интересующей Вас массы = %f\n", X, Z); 
	}  
	if (n == 2)
	{
		float A, B, x;
	start:

		printf("2.Решить линейное уравнение A·x + B = 0, заданное своими коэффициентами A и B (коэффициент A не равен 0).\nВведите, пожалуйста, значение для А = ");
		scanf("%f", &A);
		printf("Введите, пожалуйста6, значение для B = ");
		scanf("%f", &B);

		if (A == 0)
		{
			printf("Значение А не должно быть равно 0\n");
			goto start;
		}

		x = -(B / A); 
		printf("Значение X равно = %f\n", x);


	}
	if (n == 3)
	{
		
	}


}