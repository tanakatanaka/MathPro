#include "pch.h"
#include "Problem8.h"
#include <fstream>
#include <iostream>
#include <stdlib.h>

Problem8::Problem8()
{
}

void Problem8::Initialize()
{
	Resoleve();
}

void Problem8::Resoleve()
{
	ReadFile();
	long long int maxNum = 0;

	for (int i = 0; i < str.length(); i++)
	{
		long long int resultNum = 1;
		
		for (int j = 0; j < 13; j++)
		{
			int index = i + j;
			if (index >= str.length()) continue;

			resultNum = int(str[index] - '0') * resultNum;
		}

		if (maxNum < resultNum)
			maxNum = resultNum;
		
	}

	printf("maxNum = %lld\n", maxNum);


}

void Problem8::ReadFile()
{
	std::ifstream ifs("C:\\problem8.txt");

	if (ifs.fail())
	{
		std::cerr << "Failed to open file." << std::endl;
		return;
	}

	while (getline(ifs, str));
		//std::cout << "#" << str << std::endl;
}

void Problem8::Finalize()
{

}

Problem8::~Problem8()
{
	Finalize();
}
