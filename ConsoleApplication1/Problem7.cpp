#include "pch.h"
#include "Problem7.h"


Problem7::Problem7()
{
}

void Problem7::Initialize()
{
	Resoleve();
}

void Problem7::Resoleve()
{
	unsigned long long int targetNum = 2;
	PrimeList.clear();
	PrimeList.push_back(targetNum);

	while (1)
	{
		bool prime = true;
		for (int i = 0; i < PrimeList.size(); i++)
		{
			if (targetNum % PrimeList[i] == 0)
			{
				prime = false;
				break;
			}
		}

		if (prime) 
			PrimeList.push_back(targetNum);

		if (PrimeList.size() == 10001)
			break;

		targetNum++;
	}

	printf("targetNum = %lld\n", targetNum);

}

void Problem7::Finalize()
{

}

Problem7::~Problem7()
{
	Finalize();
}
