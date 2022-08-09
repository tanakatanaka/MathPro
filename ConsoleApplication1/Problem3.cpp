#include "pch.h"
#include "Problem3.h"
#include<stdio.h>


Problem3::Problem3()
{
}


void Problem3::Initialize()
{
	PrimeList.clear();
	unsigned long long int num = 600851475143;
	unsigned long long int max = GetPrime(num);

	printf("MaxPrime = %lld\n", max);
}

unsigned long long int Problem3::GetPrime(unsigned long long int num)
{
	unsigned long long int maxNum = 0;
	
	for (int i = 2; i < num; i++)
	{
		if (num % i == 0 && IsPrime(i))
			maxNum = i;
	}

	return maxNum;
}

bool Problem3::IsPrime(unsigned long int targetNum)
{
	for(int i = 0; i < PrimeList.size(); i++)
	{ 
		if (targetNum % PrimeList[i] == 0)
			return false;
	}

	PrimeList.push_back(targetNum);
	return true;
}

void Problem3::Finalize()
{

}

Problem3::~Problem3()
{
}
