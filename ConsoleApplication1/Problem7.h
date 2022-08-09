#pragma once
#include "Problem.h"
#include <vector>
class Problem7 : public Problem
{
public:
	Problem7();
	~Problem7();

	void Initialize();
	void Finalize();

private:
	void Resoleve();

	std::vector< unsigned long long int> PrimeList;
};

