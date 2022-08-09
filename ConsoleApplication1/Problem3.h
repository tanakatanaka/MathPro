#pragma once
#include "Problem.h"
#include <vector>
class Problem3 : public Problem
{
public:
	Problem3();
	~Problem3();

	void Initialize();
	void Finalize();

private:
	unsigned long long int GetPrime(unsigned long long intnum);
	bool IsPrime(unsigned long int targetNum);

	std::vector<unsigned long long int> PrimeList;
};

