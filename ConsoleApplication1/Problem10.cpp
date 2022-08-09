#include "pch.h"
#include "Problem10.h"


Problem10::Problem10()
{
}

void Problem10::Initialize()
{
	Resoleve();
}

void Problem10::Resoleve()
{
	long long int totalNum = 0;
	int targetNum = 2;
	PrimeList.clear();
	PrimeList.push_back(targetNum);

	for(; targetNum < 2000000; targetNum++)
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
	}


	for (int i = 0; i < PrimeList.size(); i++)
		totalNum += PrimeList[i];

	printf("answer = %lld\n", totalNum);
}

void Problem10::Finalize()
{

}

Problem10::~Problem10()
{
	Finalize();
}
