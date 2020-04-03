/*
Written By : Samuel Wesley Rasquinha
Age : 13 Years
Project : Pi-Estimate-Generator (Remastered)
email : samuelrasquinha@gmail.com
*/

// Compile this project using VS compiler

#include <stdio.h>
#include <stdlib.h>
#include <float.h>
#include <conio.h>

#define FLOAT long double

int main()
{
	const auto pi = 3.14159265358979323846;
	FLOAT error, diff, p, q, ans;
	unsigned long long nume, denom, fracs;
	unsigned int cycles = 5;

	error = pi;
	p = 22;
	q = 7;
	fracs = 0;

	printf("Enter the amount of estimation(s) that you require : ");
	scanf_s("%d", &cycles);

	while (fracs < cycles)
	{
		ans = p / q;

		diff = (ans - pi);

		if (diff < 0)
		{
			diff = diff * (-1);
		}

		if (diff < error)
		{
			error = diff;
			nume = (int)p;
			denom = (int)q;
			printf("\nThe better fraction of pi is %lld / %lld and error is %Le", nume, denom, error);
			fracs++;
		}

		if (ans >= pi)
		{
			q++;
		}

		else
		{
			p++;
		}
	}

	_getch();
	return 0;
}
