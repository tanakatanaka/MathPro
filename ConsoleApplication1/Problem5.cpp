#include "pch.h"
#include "Problem5.h"
#include<stdio.h>

Problem5::Problem5()
{
}

void Problem5::Initialize()
{
	Resoleve();
}

void Problem5::Resoleve()
{
	unsigned int target = 20;

	while (1)
	{
		bool result = true;

		for (int i = 2; i <= 20; i++)
		{
			if (target % i != 0)
			{
				result = false;
				break;
			}
		}
		if (result) break;

		target++;
	}

	printf("target = %d\n", target);

}


void Problem5::Finalize()
{

}

Problem5::~Problem5()
{
	Finalize();
}
