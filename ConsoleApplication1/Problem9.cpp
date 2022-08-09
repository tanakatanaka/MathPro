#include "pch.h"
#include "Problem9.h"
#include<stdio.h>

Problem9::Problem9()
{
}


void Problem9::Initialize()
{
	Resoleve();
}

void Problem9::Resoleve()
{
	int answer = 0;

	for (int a = 1; a < 1000; a++)
	{
		for (int b = 1; b < 1000; b++)
		{
			for (int c = 1; c < 1000; c++)
			{
				if (a * a + b * b != c * c) 
					continue;

				if (a + b + c == 1000)
					answer = a * b*c;
			}
		}
	}

	printf("answer = %d\n", answer);



}

void Problem9::Finalize()
{

}

Problem9::~Problem9()
{
	Finalize();
}
