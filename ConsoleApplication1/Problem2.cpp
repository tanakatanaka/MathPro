#include "pch.h"
#include "Problem2.h"
#include<stdio.h>

Problem2::Problem2()
{
}

void Problem2::Initialize()
{
	const unsigned int num = 4000000;
	unsigned int firstNum = 1;
	unsigned int secondNum = 2;
	unsigned int total = 0;
	unsigned int evenTotal = 0;

	while (1)
	{
		total = firstNum + secondNum;
		firstNum = secondNum;
		secondNum = total;

		if (total % 2 == 0) 
			evenTotal += total; 

		if (total >= num) 
			break;
	}

	printf("evenTotal = %d\n", evenTotal);

}

void Problem2::Finalize()
{

}


Problem2::~Problem2()
{
	Finalize();
}
