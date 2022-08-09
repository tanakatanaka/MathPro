#pragma once
#include "Problem.h"
#include <string>
class Problem8 : public Problem
{
public:
	Problem8();
	~Problem8();

	void Initialize();
	void Finalize();

private:
	void Resoleve();
	void ReadFile();
	std::string str;
};

