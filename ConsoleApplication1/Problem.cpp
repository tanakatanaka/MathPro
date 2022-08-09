#include "pch.h"
#include "Problem.h"
#include<stdio.h>

Problem::Problem()
{
}

void Problem::Initialize()
{
	int num = 10000;
	int total = 0;

	for (int i = 1; i < num; i++)
	{
		if (i % 3 == 0 || i % 5 == 0)
			total += i;
	}

	printf("total = %d\n", total);

}

void Problem::Finalize()
{

}


Problem::~Problem()
{
	Finalize();
}
