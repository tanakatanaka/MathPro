#include "pch.h"
#include "Problem6.h"
#include<stdio.h>

Problem6::Problem6()
{
}


void Problem6::Initialize()
{
	Resoleve();
}

void Problem6::Resoleve()
{
	long int total = 0;
	long int doubleTotal = 0;
	long int answer = 0;

	for (int i = 1; i <= 100; i++)
	{
		total += i;
		doubleTotal += i * i;
	}

	answer = total * total - doubleTotal;

	printf("doubleTotal = %ld\n", answer);
}

void Problem6::Finalize()
{
}

Problem6::~Problem6()
{
	Finalize();
}
