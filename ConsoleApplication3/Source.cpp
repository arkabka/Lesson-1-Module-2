#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


void main()

{
	setlocale(LC_ALL, "Rus");

	int n;
	printf("Please choose the number of exercise n = ");
	scanf_s("%d", &n);


	if (n == 1)
	{
		int a;
		printf("Please input any number = ");
		scanf_s("%d", &a);

		if (a >= 0)
		{
			printf("The number you wrote is possitive\n");
		}
		else
		{
			printf("The number you wrote is negative\n");
		}
	}
	else if (n == 2)
	{

		int a;
		printf("Please input any number = ");
		scanf_s("%d", &a);

		if ((a % 2) == 0)
		{
			printf("The number you wrote is even\n");
		}
		else
		{
			printf("The number you wrote is add\n");
		}
	}
	else if (n == 3)
	{
		int a, b;
		printf("Please input any number for a and b ");
		scanf_s("%d%d", &a, &b);

		if ((a % 2) == 0)
		{
			printf("The number 'a' is even\n");
		}
		else
		{
			printf("The number 'a' is add\n");
		}
	}
	else if (n == 4)
	{
		int a, b;
		printf("Please input numbers for a and b ");
		scanf_s("%d%d", &a, &b);

		if ((a > 2) && (b <= 3))
		{
			printf("True inequalities A>2 and B<=3\n");
		}
		else
		{
			printf("False inequalities A>2 and B<=3\n");
		}
	}
	else if (n == 5)
	{
		int a, b;
		printf("Please input numbers for a and b ");
		scanf("%d%d", &a, &b);

		if ((a > 0) && (b < -2))
		{
			printf("True inequalities A>0 and B<-2\n");
		}
		else
		{
			printf("False inequalities A>0 and B<-2\n");
		}
	}
	else if (n == 6)
	{
		int a, b, c;
		printf("Please input numbers for a b c ");
		scanf("%d%d%d", &a, &b, &c);

		if ((a < b) && (b < c))
		{
			printf("True inequalities for a<b<c\n ");
		}
		else
		{
			printf("False inequalities for a<b<c\n");
		}
	}
	else if (n == 7)
	{
		int a, b, c;
		printf("Please input numbers for a b c ");
		scanf("%d%d%d", &a, &b, &c);

		if ((a < b) && (b < c))
		{
			printf("True inequalities for 'number b is between a & c'\n");
		}
		else
		{
			printf("False inequalities for 'number b is between a & c'\n");
		}
	}
	else if (n == 8)
	{
		int a, b;
		printf("Please input numbers for a and b ");
		scanf("%d%d", &a, &b);

		if (((a % 2) == 0) && ((b % 2) == 0))
		{
			printf("Each number is even\n");
		}
		else
		{
			printf("Each number is add\n");
		}
	}
	else if (n == 9)
	{
		int a, b;
		printf("Please input number for a and b ");
		scanf("%d%d", &a, &b);

		if (((a % 2) == 0) || ((b % 2) == 0))
		{
			printf("Non of numbers is add\n");
		}
		else
		{
			printf("One or two of numbers is add\n");
		}
	}
	else if (n == 10)
	{
		int a, b;
		printf("Please input numbers for a and b ");
		scanf("%d%d", &a, &b);

		if ((((a % 2) == 0) && ((b % 2) >= 1)) || (((a % 2) >= 1) && ((b % 2) == 0)))
		{
			printf("Only one of number is add\n");
		}
		else
		{
			printf("Not only one of number is add\n");
		}
	}
	else if (n == 11)
	{
		int a, b;
		printf("Please input numbers for a and b ");
		scanf("%d%d", &a, &b);

		if ((((a % 2) == 0) && ((b % 2) == 0)) || (((a % 2) >= 1) && ((b % 2) >= 1)))
		{
			printf("Both of numbers got same parity\n");
		}
		else
		{
			printf("Both of number hasn't got same parity\n");
		}
	}
	else if (n == 12)
	{
		int a, b, c;
		printf("Please input numbers for a b c ");
		scanf("%d%d%d", &a, &b, &c);

		if ((a > 0) && (b > 0) && (c > 0))
		{
			printf("All numbers are bigger than 0 means possitive\n");
		}
		else
		{
			printf("Not number are bigger than 0 means 1 or 2 negative\n");
		}
	}
	else if (n == 14)
	{
		int a, b, c;
		printf("Please input numbers for a b c ");
		scanf("%d%d%d", &a, &b, &c);

		if ((a > 0) && (b < 0) && (c < 0) || (a < 0) && (b < 0) && (c > 0) || (a < 0) && (b > 0) && (c < 0))
		{
			printf("There are only number is possitive\n");
		}
		else
		{
			printf("There are two or more possitive numbers\n");
		}
	}
	else if (n == 13)
	{
		int a, b, c;
		printf("Please input numbers for a b c ");
		scanf("%d%d%d", &a, &b, &c);

		if ((a > 0) && (b < 0) && (c < 0) || (a < 0) && (b < 0) && (c > 0) || (a < 0) && (b > 0) && (c < 0) || (a > 0) && (b > 0) && (c < 0) || (a > 0) && (b < 0) && (c > 0) || (a < 0) && (b > 0) && (c > 0))
		{
			printf("There are at least one possitive number\n");
		}
		else
		{
			printf("There non possitive number\n");
		}
	}
	else if (n == 15);
	{
		int 
	}
	

	return ;
}