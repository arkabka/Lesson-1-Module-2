#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


void main()

{
	//printf("a) b5 10 \tb) 100 t \tc) x 25\n   7 cm \t   1949 v \t   x y\n");

	//������� 2

	/*setlocale(LC_ALL, "Rus");

	float a, y;
	printf("������� �������� a ");

	scanf("%f", &a);

	y = (7 * a*a) - (3 * a) + 3;

	printf("�������� � = %f\n", y);*/

	// ������� 3

	/*int a, x;

	printf("Ukazhites storonu kvadrata x = ");
	scanf("%d", &x);

	a = x * 4;

	printf("Znachenie a = %d\n", a);*/

	// ������� 4

	/*float r, p;
	printf("Ukazhite radius okruzhnosti r = ");
	scanf("%f", &r);

	p = r * 2 * 3.14;

	printf("%f\n", p);*/

	

	setlocale(LC_ALL, "Rus");


	int n;
	printf("�������� ����� ������� n = ");
	scanf("%d", &n);
	if (n == 1)
	{
		float M, S, X, Y, Z;
		printf(" 1.��������, ��� X �� ������ ����� A ������. ����������, ������� ����� 1 �� � Y �� ���� �� ������.\n ������� ����� � �� = ");
		scanf("%f", &M);
		printf(" ������� ��������� = ");
		scanf("%f", &S);
		printf(" ������� ����� ��������� ������� ��� ���������� = ");
		scanf("%f", &Y);

		X = S / M;
		Z = X * Y;

		printf("��������� ������ ���������� ����������  = %f\n ��������� ������������ ��� ����� = %f\n", X, Z); 
	}  
	if (n == 2)
	{
		float A, B, x;
	start:

		printf("2.������ �������� ��������� A�x + B = 0, �������� ������ �������������� A � B (����������� A �� ����� 0).\n�������, ����������, �������� ��� � = ");
		scanf("%f", &A);
		printf("�������, ����������6, �������� ��� B = ");
		scanf("%f", &B);

		if (A == 0)
		{
			printf("�������� � �� ������ ���� ����� 0\n");
			goto start;
		}

		x = -(B / A); 
		printf("�������� X ����� = %f\n", x);


	}
	if (n == 3)
	{
		
	}


}