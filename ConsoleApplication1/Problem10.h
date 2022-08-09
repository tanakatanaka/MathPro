#pragma once
#include "Problem.h"
#include <vector>
class Problem10 : public Problem
{
public:
	Problem10();
	~Problem10();
	void Initialize();
	void Finalize();

private:
	void Resoleve();
	std::vector<int> PrimeList;
};

