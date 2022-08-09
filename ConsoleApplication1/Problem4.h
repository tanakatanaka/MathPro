#pragma once
#include "Problem.h"
class Problem4 : public Problem
{
public:
	Problem4();
	~Problem4();

	void Initialize();
	void Finalize();

private:
	void CalcPalindrome();
	bool	CheckPalindrome(unsigned int CheckNum);
};

