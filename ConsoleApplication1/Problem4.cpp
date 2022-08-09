#include "pch.h"
#include "Problem4.h"
#include<stdio.h>
#include <cmath>

Problem4::Problem4()
{
}

void Problem4::Initialize()
{
	CalcPalindrome();
}

void Problem4::CalcPalindrome()
{
	unsigned int maxNum = 0;

	for (int num = 999; num > 100; num--)
	{
		for (int num2 = 999; num2 > 100; num2--)
		{
			unsigned int resultNum = num * num2;

			if (!CheckPalindrome(resultNum))
				continue;

			if (maxNum < resultNum)
				maxNum = resultNum;
		}
	}

	printf("maxNum = %d\n", maxNum);
}


bool  Problem4::CheckPalindrome(unsigned int CheckNum)
{
	unsigned int copyNum = CheckNum;
	int arr[6];

	for (int i = 0; i < 6; i++)
	{
		arr[i] = copyNum / std::pow(10, 5 - i);
		copyNum = copyNum - arr[i] * std::pow(10, 5 - i);
	}

	for (int i = 0; i < 3; i++)
	{
		if (arr[i] != arr[5 - i]) return false;
	}


	return true;
}


void Problem4::Finalize()
{

}

Problem4::~Problem4()
{
}
